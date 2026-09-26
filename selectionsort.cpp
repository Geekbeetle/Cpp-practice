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
    std::vector<int> arr={3,5,82,1,2,8,9};
    std::cout<<"---------before---------\n";
    print_arr(arr);
    selection_sort(arr);
    std::cout<<"---------after----------\n";
    print_arr(arr);
    return 0;
}