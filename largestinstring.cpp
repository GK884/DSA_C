/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Largest word in a sentence
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    
    char a[n+1];
    cin.getline(a,n);
    // cin.ignore();
    
    int curr= 0;
    int mx = 0;
    int i=0;
    
    while(1)
    {
        if(a[i] == ' ' || a[i] =='\0')
        {

            mx = max(mx,curr);
            curr = 0;
        }
        else{
            curr++;
        }
        if(a[i] == '\0')
        {
            break;
        }
        
        i++;
    }
    
    
    cout<<mx;
    
    return 0;
}
