/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,j,k,n;
    cin>>n;
    for(i = 1; i<= n; i++)
    {
        for(k = n-i; k> 0 ; k--)
        {
            cout<<" ";
            
        }
        for(j = 1; j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
