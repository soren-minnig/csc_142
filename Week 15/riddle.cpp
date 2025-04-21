#include <iostream>
#include <tuple>
#include <string>

int main(){
    int riddleNumber;
    std::string riddleName;
    bool riddleSolved;
    
    std::tuple<int, std::string, bool> riddle (7, "What has roots as nobody sees, is taller than trees...", true);
    std::tie(riddleNumber, riddleName, riddleSolved) = riddle;
    std::cout << "Riddle #" << riddleNumber << ": " << riddleName << std::endl;
    std::cout << "Solved: ";
    if (riddleSolved == true){
        std::cout << "Yes";
    }
    else{
        std::cout << "No";
    }

    return 0;
}