#include <iostream>
int main(){
    //pass fail program
    int marks;
     std::cout<<"Enter your marks:"<<"\n";
     std::cin>>marks;
     std::cout<< (marks>=40 ? "PASS": "FAIL")<<"\n";
    // even odd detector
    int num;
    std::cout<<"enter a number:"<<"\n";
    std::cin>>num;
    num%2==0 ? std::cout<<"This is an EVEN number"<<"\n": std::cout<<"This is an ODD number"<<"\n";
    std::cout<<"how was the days"<<"\n";
    std::string smthng;
    getline(std::cin, smthng);
    std::cout<<"you said: "<<smthng<<"\n";
    return 0;
}