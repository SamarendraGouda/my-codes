/* Switch as Alt to If-Else */

#include <iostream>
using namespace std;
int main(){

    /* ODD or EVEN?? */
    int x;
    cout<<"Enter a number:";
    cin>>x;

    int rem = x%2;


    switch (rem)
    {
    case 0:
        cout<<"Even Number";
        break;
    
    default:
        cout<<"Odd Number";
        break;
    }


    return 0;
}