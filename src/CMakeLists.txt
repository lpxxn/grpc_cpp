message(STATUS "PROJECT_BINARY_DIR ${PROJECT_BINARY_DIR}, name: ${PROJECT_NAME}")
message(STATUS "PROJECT_SOURCE_DIR ${PROJECT_SOURCE_DIR}")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin) # 二进制文件的输出目录

find_package(Protobuf CONFIG REQUIRED)

message(STATUS "Using protobuf ${Protobuf_VERSION}")

find_package(gRPC CONFIG REQUIRED)
message(STATUS "Using gRPC ${gRPC_VERSION}")

link_directories(${PROJECT_SOURCE_DIR}/lib/restclient-cpp)
link_directories(${PROJECT_SOURCE_DIR}/lib/yaml-cpp)
link_directories(${PROJECT_SOURCE_DIR}/lib/spdlog)
find_package(Threads REQUIRED)
add_executable(${PROJECT_NAME} main.cpp utils/log.cpp common.pb.cc model/students.pb.cc)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(${PROJECT_NAME} Threads::Threads)
target_link_libraries(${PROJECT_NAME} gRPC::grpc++)
target_link_libraries(${PROJECT_NAME} restclient-cpp)
target_link_libraries(${PROJECT_NAME} yaml-cpp.a)
target_link_libraries(${PROJECT_NAME} spdlog.a)
