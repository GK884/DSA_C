/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Arrays Challenge-Subarray with given sum KICKSTART QUESTION
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
    
   int mx = INT_MIN;
   
   for(int i=0;i<n;i++)
   {    
       int curr = 0;
       for(int j=i;j<n;j++)
       {
           curr= curr+a[j];
           mx=max(mx,curr);

           
       }
   }
    
    cout<<mx;
    
    return 0;
}
