/* Program to implement WHILE Loop */
/* Program to find sum of first n numbers using WHILE Loop */

#include <iostream>
using namespace std;
int main(){

    int count;
    cout<< "Enter the number:";
    cin>>count;
    int sum = 0;

    int i =0;
    while (i<=count)
    {
        sum = sum + i;
        i++;


    }
    cout<<sum;
    return 0;
    
    
}