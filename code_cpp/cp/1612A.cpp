#include <iostream>
#include <cstdlib>
using namespace std;
 
int main()
{   
    unsigned seed = 1;
    srand(seed);
    for (int i = 0; i < 5; i++)
    {
        cout<<rand()<<endl;
    }
    


 
    return 0;
}