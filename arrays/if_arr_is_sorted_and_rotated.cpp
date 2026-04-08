//{1,2,3,4} is sorted so return true if arr is that or its rotated form like{2,3,4,1} but false if {3,2,1,4}#
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> num(n+1);//makes vector of size n each element initiated with 0
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        arr[i]=num[i];
    }
    sort(num.begin(),num.begin()+n);
    string istrue="false";
    int k=n;
    while(k!=0){
        int temp=num[n-1];
        for(int i = n-1; i >= 1; i--){
        num[i] = num[i-1];
        }
        num[0]=temp;
        int count=0;
        for(int i=0;i<n;i++){
            if(num[i]==arr[i]) count++;
        }
        if(count==n) {istrue="true"; break;}
        k--;
    }
    cout <<  istrue;
}