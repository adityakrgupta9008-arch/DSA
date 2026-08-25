#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,10,12,8,9};
    int largest = arr[0];
    for(int i = 0; i<5; i++){
        if(arr[i]>= largest)
        largest = arr[i];
        }
        cout << "largest : "<< largest;
        return 0;
}