// void quick_sort(int arr[],int l,int n){
//     if(n-l-1==0){ return ;}
//     int pivot=n-1;
//     for(int i=l;i<pivot;i++){
//         if(arr[i]<arr[pivot]){
//             swap(arr[i],arr[pivot]) ;
//         }
//     }
//     quick_sort(arr,l,pivot);
//     quick_sort(arr,pivot,n);
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     quick_sort(arr,0,n);
//     for(int i=0;i<n;i++){
//         cout << arr[n-i-1] << " ";
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];   // pivot = last element
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);

    for (int x : arr)
        cout << x << " ";
}
