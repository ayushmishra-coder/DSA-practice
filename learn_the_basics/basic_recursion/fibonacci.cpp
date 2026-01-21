#include<bits/stdc++.h>
using namespace std;
int nth_fibonacciTerm(int n){
    if(n<=1) return n;
    return nth_fibonacciTerm(n-1)+nth_fibonacciTerm(n-2);
 }
//0 1 1 2 3 5 8 13..

int main(){
    int n;;
    cin >> n;
    cout << nth_fibonacciTerm(n);
}
  //{  
//     int t1=0;
//     int t2=1;
//     for(int i=1;i<n;i++){
//         int tn=t1+t2;
//         t1=t2;
//         t2=tn;
//     }
//     cout << t2;
// }