#include <iostream>
int main(){
    
    
    int age;
    std::cout<<"what is your age:"<<"\n";
    std::cin>>age;
    if(age>=18){
        std::cout<<"welcome to the site!"<<"\n";
    }
    else if(age<0){
        std::cout<<"lets wait till you are born!"<<"\n";
    }
    else{
        std::cout<<"you are not allowed to enter the site!"<<"\n";
    }

    char grade;
    std::cout<<"enter your grade:"<<"\n";
    std::cin>>grade;
    switch(grade){
        case 'A':
            std::cout<<"TEZZ CHAL RHAAA HHH NERD"<<"\n";
            break;
        case 'B':
        std::cout<<"topper ke sath bethne wala"<<'\n';
        break;
        case 'C':
        std::cout<<"Midranger student"<<"\n";
        break;
        case 'F':
        std::cout<<"back aagyiiii koi na me bhi tere sath huu"<<"\n";
        break;
        default:
        std::cout<<"attempt nhi krra ky bhaiii"<<'\n';
    }
    return 0;
}