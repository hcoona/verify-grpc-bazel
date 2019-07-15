#ifndef CODELAB_GRPC_GREETER_CLIENT_H_
#define CODELAB_GRPC_GREETER_CLIENT_H_

#include <memory>
#include <string>

#include "src/main/proto/hello.pb.h"
#include "src/main/proto/hello.grpc.pb.h"
#include "grpc++/grpc++.h"

namespace codelab {

class GreeterClient {
 public:
  GreeterClient(Greeter::StubInterface* stub);
  // Assembles the client's payload, sends it and presents the
  // response back from the server.
  std::string SayHello(const std::string& user);

 private:
  Greeter::StubInterface* stub_;  // Not owned
};

}  // namespace codelab
#endif  // CODELAB_GRPC_GREETER_CLIENT_H_
