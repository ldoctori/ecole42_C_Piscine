/*
Дана прямоугольная матрица из нулей и единиц. Найти подматрицу из единиц максимального размера.
*/
 
#include <iostream>
 
    using namespace std;
 
int f(int** a, int k, int m) {
    int x, y, p, max;
    max = 0;
    for (int i = 0; i < m; i++) {
        x = 0;
        for (int j = i + 1; j < m; j++) {
            if (a[k][i] <= a[k][j])
                x++;
            else
                break;
        }
        y = 0;
        for (int j = i; j >= 0; j--) {
            if (a[k][i] <= a[k][j])
                y++;
            else
                break;
        }
        p = a[k][i] * (x + y);
        if (p > max)
            max = p;
    }
    return max;
}
 
int main() {
    int n, m, max, x, y;
    cout << "Enter a matrix size:\n";
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    int ** a = new int * [n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < m; j++) {
        for (int i = 1; i < n; i++) {
            if (a[i][j] != 0)
                a[i][j] += a[i-1][j];
        }
    }
    max = 0;
    for (int i = 0; i < n; i++) {
        if (f(a, i, m) > max)
            max = f(a, i, m);
    }
    cout << "Max square = " << max << "\n";
    for (int i = 0; i < n; i++) {
        delete [] a[i];
    }
    delete [] a;
    system("pause");
    return 0;
}
