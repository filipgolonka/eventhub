#pragma once

#include <string>

#include "metrics/Types.hpp"
#include "Forward.hpp"

namespace eventhub {
namespace metrics {

class JsonRenderer final {
public:
  static const std::string RenderMetrics(Server* server);
};

} // namespace metrics
} // namespace eventhub


