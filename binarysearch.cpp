#include <iostream>

using namespace std;

int string_binary_search(string arr[], int size, string target){

     int low = 0;
     int high = size - 1;
     while(low <= high){
         int mid = (low + high) / 2;
         if(arr[mid] == target){
            return mid;
         }
         else if(arr[mid] < target){
            low = mid + 1;
         }
         else{
            high = mid - 1;
         }
    }
    return -1;
}

int main()
{
    
    string arr[] = {"Barisal", "Chittagong", "Dhaka", "Khulna", "Mymensingh", "Rajshahi", "Rangpur", "Sylhet"};
    int size = sizeof(arr) / sizeof(arr[0]);
    string target;

    cout << "Enter the target city name: ";
    cin >> target;

    int result = string_binary_search(arr, size, target);
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    }
    else{
        cout << "Element not found!" << endl;
    }
    
    return 0;
}