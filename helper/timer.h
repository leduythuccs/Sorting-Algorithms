#include <chrono>
class Timer {
private:
    std::chrono::high_resolution_clock::time_point last_time;
public:
    Timer();
    void start();
    int64_t getRunningTime();
};