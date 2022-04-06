#include <iostream>
using namespace std;
int main(){

    //Pointers 

    int var = 10;
    
    int *ptr= &var;
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n"; 

    return 0;
    
}