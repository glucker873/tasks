#include <iostream>

int* memory_alocation(int n) {
    return new int[n];

}

void reading(int* arr, int n) {
    for (int i{}; a < n; ++a) {
        std::cin >> arr[a];
    }
}

void print(int* arr, int n) {
    for (int a{}; a < n; ++a) {
        std::cout << arr[a] << "";
    
    }
    std::cout << '\n';
}   

void clear (int*& arr) {
    delete[] arr;
    arr = nullptr;
}

//task1

int find_pos(int* arr, int n, int z) {
    for (int a{}; a < n; ++a) {
        if (arr[a] == z) {
            return a + 1;
        }
    }
    return -1;
}

//task2
bool sorted(int* arr, int n) {
    for (int a{1}; a < n; ++a) {
        if (arr[a] < arr[a - 1]) {
            return false;
        }
    }
    return true;
}


//task3
int bigger_than_neigh(int* arr, int n) {
    int count{};
    for (int a{1}; a < n - 1; a++) {
        if (arr[a] > arr[a - 1] && arr[a] > arr[a + 1]) {
            ++count;
        }
    }
    return count;
}

int main() {
    const int n = 6;
    
}