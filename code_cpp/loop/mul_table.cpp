/* Print Multiplication table of 24,25,26*/

#include <iostream>
using namespace std;
int main(){
    int count = 10;
    int num = 24;
    
    for (int i = 1; i <= count; i++)
    {
        cout<<"24 x "<<i<<" = "<<num*i<<endl;
    }

    num = 25;
    
    for (int i = 1; i <= count; i++)
    {
        cout<<"25 x "<<i<<" = "<<num*i<<endl;
    }

    num = 26;
    
    for (int i = 1; i <= count; i++)
    {
        cout<<"26 x "<<i<<" = "<<num*i<<endl;
    }
return 0;
}