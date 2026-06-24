// show maximum element in array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 5, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Maximum element in array is: " << max << endl;
    return 0;
}