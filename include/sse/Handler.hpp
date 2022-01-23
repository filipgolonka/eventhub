#pragma once

#include <functional>
#include <memory>
#include <string>
#include <vector>

#include "Connection.hpp"
#include "ConnectionWorker.hpp"
#include "HandlerContext.hpp"
#include "http/Parser.hpp"

namespace eventhub {
namespace sse {

class Handler final {
public:
  static void HandleRequest(HandlerContext& ctx, http::Parser* req);

private:
  Handler() {}
  ~Handler() {}
};

} // namespace sse
} // namespace eventhub


