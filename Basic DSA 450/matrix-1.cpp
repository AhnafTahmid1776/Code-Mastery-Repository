#include <iostream>
using namespace std;
#define R 5
#define C 5
//spiral matrix print
void spiralPrint(int m, int n, int a[R][C])
{
    int i, k = 0, l = 0;
    while (k < m && l < n) {
        for (i = l; i < n; ++i) {
            cout << a[k][i] << " ";
        }
        k++;
        for (i = k; i < m; ++i) {
            cout << a[i][n - 1] << " ";
        }
        n--;


        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                cout << a[m - 1][i] << " ";
            }
            m--;
        }

        /* Print the first column from
                   the remaining columns */
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                cout << a[i][l] << " ";
            }
            l++;
        }
    }
}
int main()
{
    int a[R][C] = { { 1, 2, 3, 4,5 },
                    { 6, 7, 8,9,10 },
                    { 11, 12,13,14,15 },
                    { 16,17,18,19,20 } ,
                     {21,22,23,24,25}};

    // Function Call
    spiralPrint(R, C, a);
    return 0;
}
