#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,6,6,5};
    int sum = 0;
    for (int i = 0; i < 5; i++){
        sum = sum + arr[i];
    }
    cout << "Sum : " << sum;
}