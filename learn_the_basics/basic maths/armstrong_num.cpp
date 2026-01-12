#include<bits/stdc++.h>
using namespace std;
void check_ArmstrongNum(int n){
    int x=n,count=(int)(log10(n)+1),sum=0;
    while(x!=0){
        int digit=x%10;
        x=x/10;
        sum=sum+pow(digit,count);
    }
    if(sum==n){
        cout << "is armstrong";
    }
    else{
        cout << "isn't armstong";
    }
}
int main(){
    int N;
    cin >> N;
    check_ArmstrongNum(N);
} 