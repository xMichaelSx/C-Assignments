#include <stdio.h>
#include "myMath.h"

int main()
{
char x_str[32];
double ans = 0.0;
double x = 0.0;

printf("Please enter a real number: ");

while (scanf("%s", x_str) != 1){
    empty_stdin();
    printf("Not good, Please try again and enter a real number: ");
}

x = str_to_double(x_str);

// f(x) = e^x + 𝑥^3 − 2
ans = sub(add(Exponent((int)x), Power(x,3)),2);
printf("The value of f(𝑥) = 𝑒^𝑥 + 𝑥^3 − 2 at the point %s is: %0.4lf\n",x_str ,ans);

// f(x) = 3x + 2X^2
ans = add(mul(x,3),mul(Power(x,2),2));
printf("The value of f(𝑥) = 3x + 2X^2 at the point %s is: %0.4lf\n", x_str, ans);

// f(x) = (4x^3)/5 -2x
ans = sub(div(mul(Power(x,3),4),5),mul(x,2));
printf("The value of f(x) = (4x^3)/5 -2x at the point %s is: %0.4lf\n", x_str, ans);
return 0;
} 