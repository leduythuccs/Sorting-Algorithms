#ifndef TIMER_HEADER
#define TIMER_HEADER

#include <chrono>
#include <boost/chrono.hpp>
class Timer {
private:
    boost::chrono::high_resolution_clock::time_point last_time;
public:
    Timer();
    void start();
    int64_t getRunningTime();
};

Timer::Timer() {
    last_time = boost::chrono::high_resolution_clock::now();
}

void Timer::start() {
    last_time = boost::chrono::high_resolution_clock::now();
}
//return in nanosecond
int64_t Timer::getRunningTime() {
    auto cur_time = boost::chrono::high_resolution_clock::now();
    auto duration = boost::chrono::duration_cast<boost::chrono::nanoseconds> (cur_time - last_time);
    return duration.count();
}

#endif