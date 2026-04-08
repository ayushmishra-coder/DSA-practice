#include<bits/stdc++.h>
using namespace std;
// void print(vector<vector<int>>& matrix){
//     int m=matrix.size();
//     int n=matrix[0].size();
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// void makezero(vector<vector<int>>& matrix,int a,int b){
//     int m=matrix.size();
//     int n=matrix[0].size();
//     for(int i=0;i<n;i++){
//         matrix[a][i]=0;
//     }
//     for(int j=0;j<m;j++){
//         matrix[j][b]=0;
//     }
// }

void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> matrix1(matrix);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix1[i][j]==0){
                    for(int j=0;j<n;j++){
                        matrix[i][j]=0;
                    }
                    for(int i=0;i<m;i++){
                        matrix[i][j]=0;
                    }
                }
            }
        }
        for(auto el:matrix){
            for(int x:el){
                cout << x << " ";
            }
            cout << endl;
        }
}
int main(){
    vector<vector<int>> matrix={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setZeroes(matrix);
}