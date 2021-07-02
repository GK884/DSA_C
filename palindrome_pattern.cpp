/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,j,k,n,l;
    cin>>n;
    
    for(i = 1; i<= n; i++)
    {
        for(k=1; k<=n-i; k++)
        {
            cout<<" ";
            
        }
        for(j=i; j>=1; j--)
        {
            cout<<j;
        }
        for(l = 2; l<=i;l++)
        {
            cout<<l;
        }
        cout<<endl;
    }
    
    return 0;
}
