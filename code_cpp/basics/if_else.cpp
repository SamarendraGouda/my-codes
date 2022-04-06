#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    cout<< "Enter first number:";
    cin>>x;
    cout<< "Enter second number:";
    cin>>y;
    cout<< "Enter third number:";
    cin>>z;

    if (x>y)
    {
        if (y>z)
        {
            cout<< "The largest number is:"<<x;

        }
        else if (x>z)
        {
             cout<< "The largest number is:"<<x;
        }

        
    }
    else if (y>z)
    {
        cout<<"The largest number is:"<<y;

    }
    else cout<<"The largest number is:"<<z;


    return 0;
    
    

}