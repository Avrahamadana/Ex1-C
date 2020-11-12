#include <stdio.h>
#include "myMath.h"

int main(){
     float x =0;
     printf("Enter the  number: ");
     scanf("%f" , &x);
     printf("f(x) = e^x+x^3-2  %0.4f \n",sub(add(Exponent(x),Power(x,3)),2));
    
    double e = mul(x,3);
    double w = Power(x,2);
    double q = mul(w,2);
    double a = add(e,q);
     printf("f(x) = 3x +2x^x = %0.4f \n" ,a);
     
     double n = mul(Power(x,3),4);
     double m = div(n,5);
     double z = mul(x,2);
     double t = sub(m,z);
     printf("f(x) = (4x^3)/5-2x = %0.4f \n" , t);
    return 0;
}
