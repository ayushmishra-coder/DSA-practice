#include<bits/stdc++.h>
using namespace std;
//to count frequency of a no. would take O(n) time but that of q numbers(queries) would take O(q*n) time as follows
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    /*int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;// queries that is no. whose frequency u want
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==num) count++;
        }
        cout << count << endl;
    }*/
//this is where hashing comes in where a hash_array is made of size=max_value+1 that the enetered array may have e,g for arr={1,2,34,3,82} we make hash arr of size 83 
//hashing involves 1.pre calcultion where each index=num holds value==frequency the no. and 2.fething where we feth it
    int hashh[101];      //initialise hashh array given 100 is max the value entered gets
    
    //PRE_CALCULATION
    for(int i=0;i<n;i++){
        hashh[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;

        //FETCHING
        cout << hashh[num] << endl;
    }
    //NOTE: ( size of hash array acnt exceed 10^7) size of hash array cant exceed value around 10 raised to 6 when declared inside int main(),if outside,i.e, declared globalyy can go as far as around 10 raised to power 7
    // time = O(N);
    
}