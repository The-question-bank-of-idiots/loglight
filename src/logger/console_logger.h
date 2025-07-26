#pragma once

#include "logger.h"

namespace loglight {
class ConsoleLogger : public Logger {
public:
    ConsoleLogger() = default;

protected:
    
    // Logger
    void log(LogLevel level, const std::string& message) override;
};
}