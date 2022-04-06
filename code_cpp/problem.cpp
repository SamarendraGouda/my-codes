// Display sum of 1st and Last digit of N (number of test cases=t)

#include <iostream>
using namespace std;
int main () {
    int t,n,r;
    int sum = 0;
    cin>>t;


    for (int i = 1; i <= t; i++)
    {   
        cin>>n;
        r = n%10;
        while (n>=10)
        {
            n = n/10;
        }
        sum = r+n;
        cout<<"Output: "<<sum<<endl;
      
    }
    return 0;
}