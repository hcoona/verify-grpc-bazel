load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_google_googletest",
    sha256 = "927827c183d01734cc5cfef85e0ff3f5a92ffe6188e0d18e909c5efebf28a0c7",
    strip_prefix = "googletest-release-1.8.1",
    urls = ["https://github.com/google/googletest/archive/release-1.8.1.zip"],
)

http_archive(
    name = "com_google_protobuf",
    sha256 = "8eb5ca331ab8ca0da2baea7fc0607d86c46c80845deca57109a5d637ccb93bb4",
    strip_prefix = "protobuf-3.9.0",
    urls = ["https://github.com/google/protobuf/archive/v3.9.0.zip"],
)

http_archive(
    name = "com_github_grpc_grpc",
    sha256 = "11ac793c562143d52fd440f6549588712badc79211cdc8c509b183cb69bddad8",
    strip_prefix = "grpc-1.22.0",
    urls = [
        "https://github.com/grpc/grpc/archive/v1.22.0.tar.gz",
    ],
)

load("@com_github_grpc_grpc//bazel:grpc_deps.bzl", "grpc_deps")

grpc_deps()
