#include<iostream>
int main(){
    int h;
    int l=-1;
    int p=1;
    std::cout<<"enter no og coulumns\n";
    std::cin>>h;
    for(int y=0;y<h;y=y+1){
        l=l+2;
    }
    
    for(int i=1;i<=l;i=i+2){
        for(int z=h-p;z>0;z=z-1){
            std::cout<<" ";
        }
        for(int x=0;x<i;x=x+1){
            std::cout<<"*";
        }
        std::cout<<"\n";
        p=p+1;
    }
    return 0;
}