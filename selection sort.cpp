/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//selection sort
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    for(int i =0; i<n-1; i++)
    {
        for(int j =i+1; j<n; j++)
        {
            if(a[j]<a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    for(int i = 0;i<n;i++)
        cout<<a[i]<<" ";


    return 0;
}
