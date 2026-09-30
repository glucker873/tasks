#include <iostream>

using namespace std;


int longestRisingSeries(int arr[], int n) {
    if (n == 0) return 0;

    int len = 1;
    int maxLen = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            len++;
        } else {
            len = 1;
        }

        if (len > maxLen) {
            maxLen = len;
        }
    }

    return maxLen;
}

int main() {
    int n;
    cout << "Vvedite razmer massiva: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Vvedite massiv:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Dlina samoj dlinnoj serii: " << longestRisingSeries(arr, n) << endl;

    delete[] arr;

    return 0;
}