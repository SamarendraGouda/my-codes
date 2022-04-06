/* Program to implement FOR Loop */
/* Program to find sum of first n numbers using FOR Loop */

#include <iostream>
using namespace std;
int main(){
    int count;
    cout<< "Enter the number:";
    cin>>count;
    int sum = 0;

    for (int i = 1; i <= count; i++)
    {
       sum = sum + i;

    }
    cout<<"The Sum of first "<<count<<" numbers is "<<sum;
    return 0;


}