package(default_visibility = ["//visibility:public"])

load("@com_github_grpc_grpc//bazel:cc_grpc_library.bzl", "cc_grpc_library")

cc_binary(
    name = "greeter_server",
    srcs = ["greeter_server.cc"],
    deps = [
        "//src/main/proto:hello_cc_proto",
        "@com_github_grpc_grpc//:grpc++",
    ],
)

cc_library(
    name = "greeter_client",
    srcs = ["greeter_client.cc"],
    hdrs = ["greeter_client.h"],
    deps = [
        "//src/main/proto:hello_cc_proto",
        "@com_github_grpc_grpc//:grpc++",
    ],
)

cc_binary(
    name = "greeter",
    srcs = ["greeter.cc"],
    deps = [":greeter_client"],
)

cc_test(
    name = "greeter_client_test",
    size = "small",
    srcs = ["greeter_client_test.cc"],
    tags = ["exclusive"],
    deps = [
        ":greeter_client",
        "@com_google_googletest//:gtest",
        "@com_google_googletest//:gtest_main",
    ],
)
