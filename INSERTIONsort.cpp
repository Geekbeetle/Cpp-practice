#include<iostream>
#include<vector>


void insertion_sort(std::vector<int> &arr){
    int n = arr.size();
    for(int i =1;i<n;++i){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void print_arr(std::vector<int> arr){
    for(int ele:arr){
        std::cout<<ele<<" ";
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
    std::cout<<"----------before----------\n";
    print_arr(arr);
    std::cout<<"----------after----------\n";
    insertion_sort(arr);
    print_arr(arr);

}