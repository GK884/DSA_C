/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//first repeating element KICKSTART QUESTION
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int a[n];
    for(int i = 0;i< n; i++)
    {
        cin>>a[i];
    }
    
    const int N= 1e6+2;
    // cout<<N;
    int idx[N];
    for(int i = 0;i<N;i++)
    {
        idx[i]=-1;
    }
    
    int mini = INT_MAX;
    
    for(int i = 0; i<n ; i++)
    {
        if(idx[a[i]] == -1){
            idx[a[i]] = i;
        }
        else{
            mini = min(mini, idx[a[i]]);
            
        }
    }
    
    if(mini == INT_MAX){
        cout<<"-1";
    }
    else{
        cout<<mini+1;
    }
    
    return 0;
}
