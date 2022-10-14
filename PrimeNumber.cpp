#include<iostream>
using namespace std;

int main()
{
    int n,i;
    bool is_prime = true;

    cout<<"Enter a Number:";
    cin>>n;

    if(n==0|| n==1)
        is_prime=false;

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            is_prime=false;
            break;
    }

    if(is_prime)
        cout<<"The given number "<<n<<" is a prime number";

    else
        cout<<"The given number "<<n<<" is not a prime number";

    return  0;
}
