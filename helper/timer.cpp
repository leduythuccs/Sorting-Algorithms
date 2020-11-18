#include "timer.h"

Timer::Timer() {
    last_time = std::chrono::high_resolution_clock::now();
}

void Timer::start() {
    last_time = std::chrono::high_resolution_clock::now();
}
int64_t Timer::getRunningTime() {
    auto cur_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds> (cur_time - last_time);
    return duration.count();
}