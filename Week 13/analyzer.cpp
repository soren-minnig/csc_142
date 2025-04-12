#include <iostream>
#include <cmath>

double calc_efficiency(double fuel, double weight){
    return ((fuel / weight) * 100);
}

double calc_speed(double fuel, int size, double weight){
    return ((fuel * 10000) / (size * weight));
}

double calc_time(double distance, double speed){
    return (ceil((distance * 1000000) / speed));
}

bool viability(double efficiency, double support, double time, int size, double weight){
    if (efficiency >= 20){
        if (support >= (time + 10)){
            if (size <= 8 && size >= 2){
                if (weight < 500){
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    double distance, fuel, weight;
    int crew_size, supp_dur;

    std::cout << "\nPlease enter the following information." << std::endl;

    std::cout << "What is the distance to the destination? (in million km) ";
    std::cin >> distance;
    std::cout << "How much fuel is available? (tons) ";
    std::cin >> fuel;
    std::cout << "What is the crew size? ";
    std::cin >> crew_size;
    std::cout << "What is the spaceship weight? (tons) ";
    std::cin >> weight;
    std::cout << "How many days of life support is available? ";
    std::cin >> supp_dur;

    double efficiency = calc_efficiency(fuel, weight);
    double speed = calc_speed(fuel, crew_size, weight);
    double time = calc_time(distance, speed);
    std::cout << "\nFuel efficiency: " << efficiency << "%" << std::endl;
    std::cout << "Estimated speed: " << speed << " km/day" << std::endl;
    std::cout << "Estimated travel time: " << time << " days" << std::endl;

    bool viable = viability(efficiency, supp_dur, time, crew_size, weight);
    if (viable){
        std::cout << "\nThe mission is viable.";
    }
    else{
        std::cout << "\nThe mission is NOT viable.";
    }

    return 0;

}