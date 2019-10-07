#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
    unsigned long long n, h = 1;
    bool t = true;
    cin >> n;
    unsigned long long *a = new unsigned long long[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    unsigned long long *b = new unsigned long long[n];
    unsigned long long *c = new unsigned long long[n];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        c[i] = b[i];
    }
    for (int i = 0; i < n; i++) {
        h *= a[i] + b[i];
    }
    for (unsigned long long i = 0; i < h + 1; i++) {
        t = true;
        for (int j = 0; j < n - 1; j++) {
            if (c[j] != c[j + 1]) t = false;
        }
        if (t) {
            if (c[0] != 0) cout << c[0];
            else cout << i;
            return 0;
        }
        else {
            for (int j = 0; j < n; j++) {
                if (i > c[j]) {
                    c[j] += a[j];
                }
            }
        }
    }
    return 0;
}