#include <iostream>
using namespace std;


void max(){
    int a,b;
    cin>>a>>b;
    if (a>b)
    {
        cout<<a;
    }
    else if (b>a)
        cout<<b;
    else cout<<"Equal.";
    
}


int main(){
    
    max();

    return 0;

}