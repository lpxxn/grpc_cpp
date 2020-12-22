//
// Created by li on 2020/12/16.
//

#ifndef GRPC_CPP_CONFIG_H
#define GRPC_CPP_CONFIG_H

namespace conf {
    class config {
    public:
        config();
        static *conf globalConfig() {
            if (config == nullptr) {

            }
        }

    };

private:
    static *config = nullptr;

}

#endif //GRPC_CPP_CONFIG_H
