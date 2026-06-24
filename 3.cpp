// show sum of all elements in array
#include <iostream>
using namespace std;    

int main() {
    int arr[] = {1, 5, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum of all elements in array is: " << sum << endl;
    return 0;
}