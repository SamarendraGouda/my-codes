#include <iostream>
using namespace std;

int main(){
    int i,j,rows;
    cout<<"Enter the number of Rows:";
    cin>>rows;

    i= 1;
    while (i<=rows)
    {
        j=1;
        while (j<=i)
        {
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}