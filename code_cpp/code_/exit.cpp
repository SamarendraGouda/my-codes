#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    
    int i = 1;
    while (true)
    {if (i>n)
    {
        exit(0);
    }
    
        sum += i;
        i++;
        cout<<sum<<endl;

    }
    cout<<"Program Executed Successfully."<<endl;
    return 0;
}