/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int rev = 0;
   int i, num,rem;
   cin>>num;
   
   while(num>0)
   {
        rem = num% 10;
       rev = rev*10 + rem;
       num = num/10;
   }
    
    cout<<rev;
    return 0;
}
