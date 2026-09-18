#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<< "Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    int gcd =1;
    for(int i=1; i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
        
    }
    cout<<"GCD : "<<gcd;

    return 0;

}