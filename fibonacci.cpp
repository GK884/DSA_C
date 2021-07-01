/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void fibonacci(int num)
{
    int i=0;
    int j = 1;
    int temp;
    cout<<i<<" ";
    for(int k = 1; k< num; k++)
    {
        temp = i;
        i = j;
        j = j+temp;
        cout<<i<<" ";
        
         
    }
}

int main()
{
    int num;
    cin>>num;
    fibonacci(num);

    return 0;
}
