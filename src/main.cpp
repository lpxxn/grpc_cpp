#include <iostream>
#include <string>
#include <sstream>
#include <thread>
#include <functional>
#include <chrono>

#include <protos/api/student_api.grpc.pb.h>
#include <grpcpp/create_channel.h>

#include "utils/log.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using api::QueryStudent;
using api::QueryStudentResponse;
using api::StudentSrv;


class SrvClient {
public:
    SrvClient(std::shared_ptr<Channel> ch)
            : _stub(StudentSrv::NewStub(ch)) {}

    QueryStudentResponse StudentByID(google::protobuf::int64 id) {
        auto logger = utils::rotatingExample();
        QueryStudent q;
        q.set_id(id);
        QueryStudentResponse reply;
        ClientContext ctx;
        Status status = _stub->StudentByID(&ctx, q, &reply);
        if (!status.ok()) {
            std::stringstream fmt;
            fmt << "grpc StudentByID error id: " << id << ", code: " << status.error_code() << " msg: "
                << status.error_message() << std::endl;
            std::cout << fmt.str();
            logger->error(fmt.str());
        }
        return reply;
    }

private:
    std::unique_ptr<StudentSrv::Stub> _stub;
};

void timer_start(std::function<void(void)> func, unsigned int interval) {
    std::thread([func, interval] {
        while (true) {
            func();
            std::this_thread::sleep_for(std::chrono::milliseconds(interval));
        }
    }).detach();
}

int main(int argc, char **argv) {
    SrvClient client(grpc::CreateChannel(
            "localhost:10001", grpc::InsecureChannelCredentials()));


    timer_start([&] {
        QueryStudentResponse reply = client.StudentByID(1);
        auto s_list = reply.studentlist();
        if (!s_list.empty()) {
            std::cout << "do something....." << std::endl;
        } else {
            std::cout << "no data" << std::endl;
        }
        for (auto &item : s_list) {
            std::cout << "id: " << item.id() << " name: " << item.name() << " age:" << item.age() << std::endl;
        }
    }, 2000);



    std::this_thread::sleep_for(std::chrono::hours(1));
    return 0;
}

