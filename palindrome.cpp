/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//palindrome
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    char a[n+1];
    
    cin>>a;
    
    bool flag = 1;
    
    for(int i=0;a[i] !='\0'; i++)
    {
        if(a[i] != a[n-1-i])
        {
            flag = 0;
            break;
        }
    }
    
    if(flag == 0)
    {
        cout<<"no";
        
    }
    else{
        cout<<"yes";
    }
    return 0;
}
