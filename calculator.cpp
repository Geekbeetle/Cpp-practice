#include <iostream>
int main(){
    std::cout<<"This is a simple calculator "<<'\n';
    while (true) {
        double a,b;
        std::cout<<"Enter the first number: ";
        std::cin>>a;
        std::cout<<"Enter the second number: ";
        std::cin>>b;
        char op;
        std::cout<<"enter operation(+,-,*,/): ";
        std::cin>>op;
        switch(op){
            case '+':
            std::cout<<"the sum is: "<< a+b<<'\n';
            break;
            case '*':
            std::cout<<"the sum is: "<< a*b<<'\n';
            break;
            case '-':
            std::cout<<"the sum is: "<< a-b<<'\n';
            break;
            case '/':
            std::cout<<"the sum is: "<< a/b<<'\n';
            break;
            defaut:
            std::cout<<"invalid operation"<<'\n';
        }
    std::cout<<"do you want to continue? (y/n): ";
    char choice;
    std::cin>>choice;
    if(choice=='n' || choice=='N'){
        break;
    
    }
}

    return 0;
}