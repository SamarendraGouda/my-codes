/*check whether a number is divisible by 5 and 11 or not.*/

#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number:";
    cin>>x;

    if (x%5 == 0 && x%11==0)
    {
       cout<< "The number is divisible by both 5 and 11.";
    }
    else cout<< "The number is not divisible by both 5 and 11.";

    return 0;
}