/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   //armstrong
   
   int i,num,rem;
   int sum = 0;
   cin>>num;
   int num_1 = num;
   
   while(num>0)
   {
       rem = num%10;
       sum = sum+(rem*rem*rem);
       num = num/10;
   }
   
   if(num_1 == sum){
       cout<<"Armstrong";
   }
   else
   cout<<"Not Armstrong";
    return 0;
}
