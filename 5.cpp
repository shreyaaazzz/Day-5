// show second largest element in array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 5, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int secondMax = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }
    cout << "Second largest element in array is: " << secondMax << endl;
    return 0;
}