/* Find average by taking input of 10 numbers using LOOP */

#include <iostream>
using namespace std;
int main(){
float sum = 0;
int count = 10;
int n;


for (int i = 1; i <= count; i++)
{
    cout<<"Enter Number "<<i<<":"<<endl;
    cin>>n;
    sum = sum + n;
}
float avg = sum / count;
cout<<"Average is "<<avg<<endl;


return 0;

}