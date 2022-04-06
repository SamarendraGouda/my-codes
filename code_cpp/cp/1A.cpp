#include <iostream>
using namespace std;

int main(){
    long n,m,a;
    long na,ma,res;

    cin>>n>>m>>a;

    na = n/a;
    if (n%a!=0)
    {
        na++;
    }

    ma = m/a;
    if (m%a!=0)
    {
        ma++;
    }
    res = na*ma;
    cout<<res;

    return 0;   
}