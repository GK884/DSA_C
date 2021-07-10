/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//searching an element in a matrix O(n) solution
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
        int target;
    cin>>target;
    
    int a[n][m];
    
    for(int i = 0;i<n ;i++)
    {
        for(int j =0; j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    
     for(int i = 0;i<n ;i++)
    {
        for(int j =0; j<m;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    

    
    
    bool flag = 0;
    int row,col;
    row = 0;
    col = n-1;
    
    while(row<m and col>=0)
    {
        if(a[row][col] == target)
        {
          flag = 1; 
          break;
        }
        else if(a[row][col] > target)
        {
            col--;
        }
        else{
            row++;
        }
    }
    
    if(flag == 1)
    {
        cout<<"found";
    }
    else{
        cout<<"not found";
    }

    return 0;
}
