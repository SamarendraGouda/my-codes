#include <iostream>
using namespace std;

struct rectangle{
    int l;
    int b;
};

int main(){
    struct rectangle r;
    r.l = 10;
    r.b = 5;
    cout<< "The Area of Rectangle is "<<r.l*r.b<<endl;

    return 0; 
}