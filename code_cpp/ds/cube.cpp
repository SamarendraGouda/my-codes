#include <iostream>
using namespace std;

int product(int [],int);

int main(){
    int size=4;
    int j;
    int a[size] = {10,20,30,40};
    j=product(a,size);
    cout<<j<<endl;
    return 0;
}

int product(int a[],int n){
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        p *= a[i];

    }
    return p;
    
}