 //1

#include <iostream>
int main() {
    int n, m;
    std::cin >> n >> m;
    int** a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
        for (int j = 0; j < m; j++)
            std::cin >> a[i][j];
    }
    for (int j = 0; j < m; j++) {
        int mn = a[0][j];
        for (int i = 1; i < n; i++)
            if (a[i][j] < mn) mn = a[i][j];
        std::cout << mn;
        if (j < m - 1) std::cout << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++)
        delete[] a[i];
    delete[] a;
    return 0;
}



//2

#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int** a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
        for (int j = 0; j < m; j++)
            std::cin >> a[i][j];
    }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            std::cout << a[i][j];
            if (i < n - 1) std::cout << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++)
        delete[] a[i];
    delete[] a;

    return 0;
}


// 3


#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int** a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
            std::cin >> a[i][j];
    }

    bool sym = true;
    for (int i = 0; i < n && sym; i++)
        for (int j = i + 1; j < n && sym; j++)
            if (a[i][j] != a[j][i]) sym = false;

    std::cout << (sym ? "yes" : "no") << std::endl;

    for (int i = 0; i < n; i++)
        delete[] a[i];
    delete[] a;

    return 0;
}
