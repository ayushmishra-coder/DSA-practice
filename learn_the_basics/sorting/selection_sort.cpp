#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    // for(int i=0;i<n;i++){
    //     int min=arr[i];
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]<min){
    //             min=arr[j];
    //         }    
    //     }
    //     //min found
    //     for(int k=i;k<n;k++){
    //         if(arr[k]==min){
    //             swap(arr[i],arr[k]);
    //         }
    //     }
    // }
    //same as above just  a bit different below ones are different or not exactly selection sort
    // for(int i=0;i<n;i++){
    //     int min=arr[i];
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]<min){
    //             min=arr[j];
    //             arr[j]=arr[i];
    //         }
    //         arr[i]=min;
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     int min=arr[i];
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]<min){
    //             int temp=min;
    //             min=arr[j];
    //             arr[j]=temp;
    //         }
    //     }
    //     arr[i]=min;
    // }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

