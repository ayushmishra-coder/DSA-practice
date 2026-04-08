#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows) {
        vector<vector<int>> matrix;
        matrix.push_back({1});
        for(int i=1;i<numRows;i++){
            matrix[i][0]=1;
            matrix[i][i]=1;            
            for(int j=1;j<i;j++){
                matrix[i][j]=matrix[i-1][j]+matrix[i-1][j-1];
            }
        }
        return matrix;
}
int main(){
    int numRows;
    cin >> numRows;
    vector<vector<int>> matrix1=generate(numRows);
    for(int i=0;i<numRows;i++){
        cout << "[" ;
        for(int j=0;j<=i;j++){
            cout << matrix1[i][j] << " ";
        }
        cout << "] ";
    }
}