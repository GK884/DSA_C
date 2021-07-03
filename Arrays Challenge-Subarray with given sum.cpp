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
    
    int s;
    cin>>s;
    
    int a[n];
    for(int i = 0;i< n; i++)
    {
        cin>>a[i];
    }
    
    int st = 0,ed = 0;
    int i =0;
    int sum=0;
    while(sum<s)
    {
        sum += a[i];
        i++;
    }
    i--;
    
    if(sum == s)
    {
        cout<<st+1<<" "<<i+1;
        return 0;
    }
    else{
        st = i;
        ed = i;
        // cout<<st<<ed;
        sum = 0;
        while(st>0)
        {
            sum+=a[st];
           
            if(sum==s)
            {
                cout<<st+1<<" "<<ed+1;
                return 0;
            }
             st--;
        }
    }
    
    
    return 0;
}
