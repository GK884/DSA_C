/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//upper case and lower case
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    string s;
    getline(cin,s);
    
    //UPPER CASE
    for(int i=0;i<s.size();i++)
    {
        if(s[i] >= 'a' && s[i]<='z')
        {
            s[i]-=32;
        }
    }
    cout<<s<<endl;
    
    //lower CASE
    for(int i = 0;i< s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32;
        }
    }
    cout<<s<<endl;
    
    //using predefined algorithm or function
    
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    
    return 0;
}
