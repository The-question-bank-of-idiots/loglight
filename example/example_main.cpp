//
// Created by PolarLightDance on 25-7-26.
//

#include "interface/loglight.h"

int main() {
    // create a console logger
    auto consoleLogger = loglight::LoggerFactory::createConsoleLogger();

    // log
    consoleLogger->info("Welcome to loglight");
    consoleLogger->info("This is an info message");
    consoleLogger->warning("This is a warning message");
    consoleLogger->error("This is an error message");

    consoleLogger->info("This is a info message with arguments: {}", 1);
    consoleLogger->warning("This is a warning message with arguments: {}, {}", 1, 2);
    consoleLogger->error("This is an error message with arguments: {}, {}, {}", 1, 2, std::string("hello"));

    return 0;
}