#include<iostream>
using namespace std;
int main ()
{
    int a; int b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    if (a > b ){
        cout << "A is Greater";
    }
    else if (b > a) {
    cout << "B is Greater";
}
    else{
        cout << "Both are equal";
    }
    return 0;
}