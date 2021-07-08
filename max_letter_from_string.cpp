/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//find letter with most frequency
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
    
    string y ;
    getline(cin,y);
    
    int freq[26];
    // cout<<freq;
    
    for(int i = 0; i< 26; i++)
        freq[i] = 0;
    
    for(int i = 0; i <y.size(); i++)
    {
        freq[y[i]-'a']++;
    }
    
    int mx=0;
    char ans;
    for(int i = 0; i<26; i++)
    {
        if(freq[i] > mx)
        {
            mx = freq[i];
            ans = 'a' + i;
        }
    }
    cout<<mx<<endl<<ans;
    return 0;
}
