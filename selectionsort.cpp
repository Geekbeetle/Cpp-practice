#include<iostream>
#include<vector>

void swap(int& a,int&b){
    int temp;
    temp=b;
    b=a;
    a=temp;
}


void selection_sort(std::vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        swap(arr[i],arr[min_idx]);
    }

}

void print_arr(std::vector<int> arr){
    for(int &a: arr){
        std::cout<<a<<" ";
    }
    std::cout<<"\n";
}


int main(){
    std::vector<int> arr;
            int a=0;
    while(true){
        int b;
        std::cout<<"enter no"<<a+1<<" 0 to quit\n";
        std::cin>>b;
        if(b==0 || b==0){
            break;
        }
        else{
            arr.push_back(b);
            a=a+1;
        }
    }
    std::cout<<"---------before---------\n";
    print_arr(arr);
    selection_sort(arr);
    std::cout<<"---------after----------\n";
    print_arr(arr);
    return 0;
}