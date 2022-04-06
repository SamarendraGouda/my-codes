#include <iostream>
using namespace std;

int main(){
    int x;

    cout<< "Enter a Number:";
    cin>>x;

    if (x%2 == 0)
    {
        cout<< "This is an even number.";
    }
    else cout<<"This is an odd number.";

    return 0;
    
}