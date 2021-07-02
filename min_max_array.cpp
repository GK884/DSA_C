/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<climits>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int maxno = INT_MIN, minno = INT_MAX;
    int a[n];
    
    for(int i= 0; i< n; i++)
        cin>>a[i];
    
    for(int i = 0;i < n; i++)
    {
        maxno = max(a[i],maxno);
        minno = min(a[i], minno);
    }
    cout<<maxno<<"\n"<<minno;
    return 0;
}
