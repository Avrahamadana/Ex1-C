double Power(double x , int y){
    double ans = x;
    if (y==0)
    {
       return 1;
    }
    
    while (y>1)
    {
        ans *=x; 
        y--;
    }
    return ans;
}

double Exponent(int x){
     return Power(2.718281828,x);
}