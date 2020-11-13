double Power(double x , int y){
    double ans = x;
    if (y==0)
    {
       return 1;
    }
    if (y<0)
    {
        y = y*(-1);
        while (y>1)
        {
           ans *=x; 
        y--; 
        }
        ans = 1/ans;
        return ans;
    }
    
    while (y>1)
    {
        ans *=x; 
        y--;
    }
    return ans;
}
#define n 2.718281828
double Exponent(int x){
     return Power(n,x);
}