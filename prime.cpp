#include <iostream>

using namespace std;

int main()
{
    int range1,range2;
    cin>>range1>>range2;
    int num,i;
    for(num = range1;num<=range2;num++)
    {   int i;
        for(i=2; i<num; i++)
        {
            if(num%i ==0 )
            {
                break;
            }
        }
        if(i == num)
        {
            cout<<"prime number\t"<<i;
        }
    }

    return 0;
}