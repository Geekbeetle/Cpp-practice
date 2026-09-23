#include <iostream>
// cout<< fro ectraction like input LENAAA
// cin>> GIVING LIKE DENAAA
/*int main(){
    std::string firstName;
    std::string lastName;

    std::cout<< "Enter your first name: ";
    std::cin>> firstName;
    std::cout<< "Enter your last name: ";
    std::cin>> lastName;
    std::cout<< "Hello " << firstName << " " << lastName << "\n";
    return 0;
}*/
// or we could also use smthng else like this
int main(){
    std::string name;
    std::cout<< "Enter your full name: ";
    std::getline(std::cin,name);
// using getline hm string me line likh skte h or else it will read only first word

    std::cout<< "Hello " << name << "\n";
    return 0;
}