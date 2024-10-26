#include <iostream>
#include <log.hpp>

void InitLog() {
    Log("Initialized Log");
}

void Log(const char* message) {
    std::cout << message << std::endl;
}