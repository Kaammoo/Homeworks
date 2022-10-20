#include <iostream>
void arr_rev(int n){
    int arr[n],rev_arr[n],num;
    for (int i = 0;i < n ;i++){
        std::cout << "Input " << "arr[" << i << "] = ";
        std::cin >> num;
        arr[i] = num;
    }
    for (int i = 0;i < n;i++){
        rev_arr[i] = arr[(n - 1) - i];
    }
    for (int i = 0;i < n;i++){
        std::cout << rev_arr[i];
    }
}

int main(){
    int n;
    std::cout << "How much numbers are you want to input? - ";
    std::cin >> n;
    arr_rev(n);
    std::cout << std::endl;
}
