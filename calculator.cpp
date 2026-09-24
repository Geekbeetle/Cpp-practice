#include <iostream>
int main(){
    std::cout<<"This is a simple calculator "<<'\n';
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
    return 0;
}