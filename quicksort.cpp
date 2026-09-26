#include<iostream>
#include<vector>

int partition(std::vector<int> &arr,int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j=j+1){
        if(arr[j]<=pivot){
            i=i+1;
            std::swap(arr[i],arr[j]);
        }
    }
    std::swap(arr[i+1],arr[high]);
    return i+1;
}

void quicksort(std::vector<int> &arr,int low,int high){
    if(low<high){
        int pi=partition(arr,low,high);

        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
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
        if(b==0){
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
    quicksort(arr,0,arr.size()-1);
    print_arr(arr);
}
