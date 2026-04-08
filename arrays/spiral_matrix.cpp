#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> v;

        int x=0,y=n,x1=m,y1=0;                
        while(x<x1 && y>y1){
            int i=0,j=0;
            while(j<y){
                v.emplace_back(matrix[x][j]);
                j++;
            }
            i++;
            while(i<x1){
                v.emplace_back(matrix[i][y-1]);
                i++;
            }
            j--;
            while(j>=y1){
                v.emplace_back(matrix[y-1][j]);
                j--;
            }

            i--;
            while(i>x){
                v.emplace_back(matrix[i][y1]);
                i--;
            }
            x++;y--;x1--;y1++;
        }
        return v;
    }
int main(){
    vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(auto el:matrix){
            for(int x:el){
                cout << x << " ";
            }
            cout << endl;
        }

    vector<int>res=spiralOrder(matrix);

    for(int x:res){
        cout << x << " ";
    }
}