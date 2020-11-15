#include "myMath.h"

double Exponent(int x){
    #define e 2.718281828
    return Power(e, x);
}

double Power(double x , int y){

    if(y==0) return 1.0;

    double ans = 1.0;
    char even = 'T';

    if(y<0){
        y = -y;
        if(y%2 == 0) even = 'T';
        else even = 'F';
    }

    for(int i=0; i<y; i++){
        ans*=x;
    }
    if(even == 'T') return ans;
    else return -ans;
}