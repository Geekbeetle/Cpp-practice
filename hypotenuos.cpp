#include <iostream>
#include <cmath>
int main(){
    double H,B;
    std::cout<< "Enter the Height: ";
    std::cin>> H;
    std::cout<< "Enter the Base: ";
    std::cin>> B;
    double hypo=sqrt(pow(H,2)+pow(B,2));
    std::cout<< "The Hypotenous is "<< hypo<< "cm"<< "\n";
    return 0;
}