#include <stdio.h>
#include "myMath.h"

int main(){
     double x =0;
     printf("Please inset a real number:");
     scanf("%lf" , &x);
     printf("The value of f(𝑥) = e^x+x^3-2 at the point %lf is: %0.4lf \n",x,sub(add(Exponent((int)x),Power(x,3)),2));
    
    double e = mul(x,3);
    double w = Power(x,2);
    double q = mul(w,2);
    double a = add(e,q);
     printf("The value of f(𝑥) = 3x +2x^2 at the point %lf is: %0.4lf \n" ,x,a);
     
     double n = mul(Power(x,3),4);
     double m = div(n,5);
     double z = mul(x,2);
     double t = sub(m,z);
     printf("The value of f(𝑥) = (4x^3)/5-2x at the point %lf is: %0.4lf \n" ,x, t);
    return 0;
}
