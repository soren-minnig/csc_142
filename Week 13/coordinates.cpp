#include <iostream>
#include <cmath>

double calc_x(double x, double thrust, double ang, double w_f){
    double new_x = (x + thrust * cos(ang)) * w_f;
    return new_x;
}

double calc_y(double y, double thrust, double ang, double w_f){
    double new_y = (y + thrust * sin(ang)) * w_f;
    return new_y;
}

double calc_z(double z, double thrust, double ang, double w_f){
    double new_z = z + (thrust / w_f);
    return new_z;
}

int main(){
    double x, y, z, thrust, angle, warp_factor;
    std::cout << "\nPlease enter the following information.\n" << std::endl;

    std::cout << "Enter the initial x-coordinates: ";
    std::cin >> x;
    std::cout << "Enter the initial y-coordinates: ";
    std::cin >> y;
    std::cout << "Enter the initial z-coordinates: ";
    std::cin >> z;

    std::cout << "\nEnter the thrust: ";
    std::cin >> thrust;
    std::cout << "Enter the angle: ";
    std::cin >> angle;
    std::cout << "Enter the warp factor: ";
    std::cin >> warp_factor;

    double new_x = calc_x(x, thrust, angle, warp_factor);
    double new_y = calc_y(y, thrust, angle, warp_factor);
    double new_z = calc_z(z, thrust, angle, warp_factor);

    std::cout << "\nNew x-coordinates: " << new_x << std::endl;
    std::cout << "New y-coordinates: " << new_y << std::endl;
    std::cout << "New z-coordinates: " << new_z << std::endl;
    
    return 0;
}