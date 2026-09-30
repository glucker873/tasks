#include <iostream>

using namespace std;

bool isAlternating(int arr[], int n) {
    for (int i = 1; i < n; i++) {

        if (arr[i] * arr[i - 1] >= 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Vvedite razmer massiva: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Vvedite elementy:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isAlternating(arr, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    delete[] arr;

    return 0;
}