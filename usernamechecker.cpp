#include <iostream>
#include <string>
int main(){
    std::string username;
    while(true){
        std::cout<<"enter your username (no space,atleast 4 atmax 15)\n";
        std::getline(std::cin,username);
        if(username.length()>15){
            std::cout<<"Username should be less than 15\n";
        }
        else if(username.length()<4){
            std::cout<<"username shold be more than 4\n";
        }
        else if(!(username.find(' ')==std::string::npos)){
            std::cout<<"username should not contain spaces\n";
        }
        else{
            std::cout<<"Welcome "<<username<<"\n"<<"thank you for using the program";
            break;
        }

    }
    return 1;
}