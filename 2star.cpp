#include<iostream>
using namespace std;
int main()
{
    int space,row;
    cout<<"enter the number of row:";
    cin>>row;
    for(int i=0,k=0;i<=row;++i,k=0)
    {
        for(space=1;space<=row-i;++space)
        {
            cout<<" ";
        }
        while(k!=2*i)
        {
            cout<<"*";
            ++k;
        }
        cout<<"\n";
    }
return 0;
}