// show minimum element in array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 5, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Minimum element in array is: " << min << endl;
    return 0;
}