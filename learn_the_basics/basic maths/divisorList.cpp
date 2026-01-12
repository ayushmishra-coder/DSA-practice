#include<bits/stdc++.h>
using namespace std;
// void divisor(int n){
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout << i << " ";
//         }
//     }
// }
vector<int> getDivisor(int n){
    vector<int> res;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            res.emplace_back(i);
            if(i!=n/i) res.emplace_back(n/i);
        }
    }
    sort(res.begin(),res.end());//not required but for beauty
    return res;
}
int main(){
    int N;
    cin >> N;
    for(int x:getDivisor(N)){
        cout << x << " ";
    }
} 


