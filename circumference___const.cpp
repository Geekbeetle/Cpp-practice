#include <iostream>

int main(){
    const double PI = 3.1459;
    //whenever use const funtion variable name in upper case and it eans no one cahnge change const variable
    double radius ;
    std::cout<<"Enter the radius: ";
    std::cin>> radius;
    double circumference = 2 * PI * radius;
    std::cout << "Circumference: " << circumference << "cm" << std::endl;
    return 0;
}