#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter the number : ";
    cin >> n;
    int sum =0;
    int digit;
    while(n>0)
    {
        digit = n%10;
        sum = sum + digit;
        n = n /10; 
    }
    cout <<"Sum Of digit : "<< sum;
    return 0;
}