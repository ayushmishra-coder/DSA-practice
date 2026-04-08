#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
    int n=matrix.size();
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(auto el:matrix){
        reverse(el.begin(),el.end());
    }
    for(auto el:matrix){

            for(int x:el){
                cout << x << " ";
            }
            cout << endl;
        }
}
int main(){
    vector<vector<int>> matrix={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    for(auto el:matrix){
            for(int x:el){
                cout << x << " ";
            }
            cout << endl;
        }
    cout << endl;
    rotate(matrix);
}