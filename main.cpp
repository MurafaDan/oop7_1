#include <iostream>
using namespace std;

template <typename T>
void modifyPairs(T* arr, int size) {
    for (int i = 0; i < size - 1; i += 2) {
        T sum = arr[i] + arr[i + 1];
        T diff = arr[i] - arr[i + 1];
        arr[i] = sum;
        arr[i + 1] = diff;
    }
}

int main() {
    int arr[] = {0, 2, 3, 4, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    modifyPairs(arr, size);

    cout << "Modified array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}