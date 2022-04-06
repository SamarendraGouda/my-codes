#include <iostream>
using namespace std;

void fn1(int n){
    if (n>0)
    {
        cout<<n<<endl;
        fn1(n-1);
    }
}

void fn2(int n){
    if (n>0)
    {
        fn2(n-1);
        cout<<n<<endl;
    } 
}

int main(){
    int x=3;
    fn1(x);
    fn2(x);

    return 0;
}