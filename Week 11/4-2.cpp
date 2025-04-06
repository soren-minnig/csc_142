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
};

int main(){
    TimerClass();

    return 0;
}