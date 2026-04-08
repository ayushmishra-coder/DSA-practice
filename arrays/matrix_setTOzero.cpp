#include <bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    // good example of corrupting original data when solving which should not be done just o save space or time complexity-wise: && wrong anyway if INT_MIN is already present which is higly unlikely also too much time{O(mn(m+n)) instead of O(mn)} and not readable code
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         if(matrix[i][j]==0){
    //             for(int r=0;r<m;r++){
    //                 if(matrix[r][j]!=0){
    //                 matrix[r][j]=INT_MIN;
    //                 }
    //             }
    //             for(int c=0;c<n;c++){
    //                 if(matrix[i][c]!=0)
    //                 matrix[i][c]=INT_MIN;
    //             }
    //         }
    //     }
    // }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         if(matrix[i][j]==INT_MIN){
    //             matrix[i][j]=0;
    //         }
    //     }
    // }

    // Flag to track if first row should be zeroed
    bool firstRowZero = false;
    // Flag to track if first column should be zeroed
    bool firstColZero = false;

    // Check if first row has any zero
    for (int j = 0; j < n; j++)
    {
        if (matrix[0][j] == 0)
        {
            firstRowZero = true;
            break;
        }
    }

    // Check if first column has any zero
    for (int i = 0; i < m; i++)
    {
        if (matrix[i][0] == 0)
        {
            firstColZero = true;
            break;
        }
    }

    // Mark rows and columns in first row/column
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Set matrix cells to zero based on markers
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    // Handle first row
    if (firstRowZero)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[0][j] = 0;
        }
    }

    // Handle first column
    if (firstColZero)
    {
        for (int i = 0; i < m; i++)
        {
            matrix[i][0] = 0;
        }
    }
    for(auto el:matrix){
            for(int x:el){
                cout << x << " ";
            }
            cout << endl;
        }
}


int main()
{
    vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    setZeroes(matrix);
}