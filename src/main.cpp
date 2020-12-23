#include <filesystem>
#include <iostream>
#include <string>
#include <ctime>
#include <regex>

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
    SrvClient(std::shared_ptr<Channel> channel)
            : _stub(StudentSrv::NewStub(channel)) {
    }

    QueryStudentResponse StudentByID(google::protobuf::int64 id) {
        auto logger = utils::rotatingExample();
        QueryStudent q;
        q.set_id(id);
        QueryStudentResponse reply;
        ClientContext ctx;
        Status status = _stub->StudentByID(&ctx, q, &reply);
        //logger->info(reply.studentlist());
        if (status.ok()) {
            return reply;
        }
        return reply;
    }

private:
    std::unique_ptr<StudentSrv::Stub> _stub;
};

int main(int argc, char **argv) {
    SrvClient client(grpc::CreateChannel(
            "localhost:10001", grpc::InsecureChannelCredentials()));
    auto reply = client.StudentByID(1);
    auto s_list = reply.studentlist();
    for (auto &item : s_list) {
        std::cout << "id: " << item.id() << " name: " << item.name() << " age:" << item.age() << std::endl;
    }
    return 0;
}

