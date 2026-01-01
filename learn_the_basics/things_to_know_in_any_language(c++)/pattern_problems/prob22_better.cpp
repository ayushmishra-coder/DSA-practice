#include <bits/stdc++.h>
using namespace std;

void print_pattern22(int n) {
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            int top = i;
            int bottom = size - 1 - i;
            int left = j;
            int right = size - 1 - j;

            int minDistance = top;

            if (bottom < minDistance)
                minDistance = bottom;

            if (left < minDistance)
                minDistance = left;

            if (right < minDistance)
                minDistance = right;

            cout << (n - minDistance) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print_pattern22(n);
    return 0;
}
