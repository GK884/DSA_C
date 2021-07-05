/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//find grater no from given numbers
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    int x = 1234;
    
    string y = to_string(x);
    sort(y.begin(), y.end(), greater<int>());
    cout<<y;
    
    return 0;
}
