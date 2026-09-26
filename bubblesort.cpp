#include <iostream>

void swap(int& a, int& b) {
    int temp;
    temp = b;
    b = a;
    a = temp;
}

void bubbleSort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {
    int n;
    std::cout<<"enter no of terms";
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cout<<"enter "<<"term:\n";
        std::cin>>arr[i];
    }
    std::cout<<"----------before----------------\n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i]<<"  ";
    }
    std::cout<<"\n";
    std::cout<<"----------after----------------\n";
   
    bubbleSort(arr, n);

    for (int i = 0; i < n; i++) {
        std::cout << arr[i]<<"  ";
    }

    return 0;
}