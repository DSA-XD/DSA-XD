#include<iostream>
using namespace std;

int main()
{
    int n,i,range;

    cout<<"Enter a number:";
    cin>>n;

    cout<<"Enter a range:";
    cin>>range;

    for(i=1;i<=range;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }

    return 0;
}
