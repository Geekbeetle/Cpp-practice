#include <iostream>

int main(){
    // implicit = automatic
    //explixit= giving type we want to convert into by example (int)
    double z= (int) 3.14;
    std::cout<< z<< "\n";
    int x=8;
    int y=10;
    double percent = (double)x/y * 100;
    std::cout << percent << "%" << "\n";
    return 0;

}