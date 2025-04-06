#include <chrono>
#include <iostream>

class TimerClass{
    private:
        std::chrono::steady_clock::time_point m_timestamp;

    public:
        TimerClass() : m_timestamp{std::chrono::steady_clock::now()}{}

        ~TimerClass(){
            auto current = std::chrono::steady_clock::now() - m_timestamp;
            std::cout << std::chrono::duration_cast<std::chrono::microseconds>(current).count();
            std::cout << " microseconds" << std::endl;
        }

        TimerClass(const TimerClass &rhs) noexcept : m_timestamp{rhs.m_timestamp}{}

        TimerClass& operator=(const TimerClass &rhs) noexcept{
            if (this == &rhs) return *this;

            m_timestamp = rhs.m_timestamp;

            return *this;
        }
};