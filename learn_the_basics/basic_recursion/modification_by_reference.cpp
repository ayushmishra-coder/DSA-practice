#include<bits/stdc++.h>
using namespace std;
// void func(int* x) {
//     *x = 10;
// }

// int main() {
//     int a = 5;
//     func(&a);  // ADDRESS is passed
//     cout << a;
// }
void func(int& x) {
    x = 10;
}

int main() {
    int a =5 ;
    func(a);   // NOT func(&a)
    cout << a;
}

