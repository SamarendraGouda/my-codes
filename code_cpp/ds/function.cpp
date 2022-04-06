#include <iostream>
using namespace std;

bool isEven(int n){
    if (n%2 == 0) 
    return true;
}

bool isOdd(int n){
    if (n%2 == 0)
    return false;
}

int main(){
    bool res1= isEven(6);
    bool res2 = isOdd(3);

    cout<<res1<<endl;
    cout<<res2<<endl;



    return 0;
}