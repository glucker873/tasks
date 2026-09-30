#include <iostream>
using namespace std;
void printLocalMax(int* arr, int n) {
    int k = 0; 
    
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            cout << arr[i] << " ";
            k++;
        }
    }
    if (k == 0) {
        cout << "Net lokalnyh maksimumov";
    }
}
int main() {
    int n;
    cout << "Vvedite razmer massiva: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Vvedite elementy massiva:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Lokalnye maksimumy: ";
    printLocalMax(arr, n);
    cout << endl;
    delete[] arr; 
    return 0;
}
