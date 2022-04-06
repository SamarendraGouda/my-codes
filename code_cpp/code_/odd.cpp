#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
    unsigned xyz= time(NULL);
    cout<<"seed="<<xyz<<endl;
    srand(xyz);

    for (int i = 0; i < 8; i++)
    {
        cout<<rand()<<endl;
    }
    return 0;
    
  
}
