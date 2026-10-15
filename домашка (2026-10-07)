#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) count++;
    }

    int* pos = new int[count];
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos[j++] = arr[i];
        }
    }

    std::cout << count << std::endl;
    for (int i = 0; i < count; i++) {
        std::cout << pos[i];
        if (i < count - 1) std::cout << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    delete[] pos;

    return 0;
}
