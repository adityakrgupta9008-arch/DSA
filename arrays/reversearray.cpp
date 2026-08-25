#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int st = 0; int end = 5;
    while(st < end){
        swap(arr[st],arr[end]);
        st++;end--;
    }
    for(int i = 0; i<6; i++){
        cout<< arr[i]<< " ";
    }
    return 0;

}