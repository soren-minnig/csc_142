#include <chrono>

class TimerClass{
    private:
        std::chrono::steady_clock::time_point m_timestamp;

    public:
        TimerClass() : m_timestamp{std::chrono::steady_clock::now()}{}
};