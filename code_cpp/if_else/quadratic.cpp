/* C++ program to find all roots of a quadratic equation */

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float x2,x,c;
    cout<< "Enter the coefficients of X^2, X and constant respectively:";
    cin>>x2;
    cin>>x;
    cin>>c;

    float D,r1,r2;
    D = (x*x)-(4*x2*c);

    if (D>0)
    {
        r1 = (-x + sqrt(D))/(2*x2);
        r2 = (-x - sqrt(D))/(2*x2);
        cout<<"Roots of quadratic Equations:"<< r1<<","<<r2;
    }
    else if (D == 0)
    {   r1 = (-x + sqrt(D))/(2*x2);
        cout<<"Roots of quadratic Equations:"<< r1;

 
    }
    else cout<<"No Real Roots Exist.";

    return 0;
    
        
}

