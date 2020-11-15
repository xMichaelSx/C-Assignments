#include "myMath.h"
#include <stdio.h>

// returns x + y
float add(float x , float y){
    return x+y;
}

 // returns x - y
float sub(float x , float y){
    return x-y;
}

 // returns y*x
double mul(double x , int y){
    return x*y;
}

//  returns x/y
double div(double x, int y){
    if(y != 0){
        return x/y;
    }
    else{
        printf("cannot divide by 0, returning 1");
        return 1;
    }
}

// Note: i assume its ok to make some helper functions as its the same as 
//       including big libraries, so this is more efficient.

// helper function to empty stdin after wrong input for getting input again.
void empty_stdin(void){
    int c = getchar();
    while (c != '\n' && c != EOF)
        c = getchar();
}

// // built help func to convert str input to double number.
double str_to_double(const char* arr){
    double ans = 0;
    double sign = 1; // determine if sign is negative

    if (*arr == '-'){
        arr++;
        sign = -1;
    }

    for (int is_dot = 0; *arr; arr++){
        if (*arr == '.'){
            is_dot = 1; // true
            continue; // skip the dot iteration
        }
        
        int decimal = sub(*arr,'0');  // get the number itself and not the ASCII representation
        // printf("decimal is: %d\n",decimal);
        if (decimal >= 0 && decimal <= 9){
            if (is_dot) sign /= 10.0f; // making as much "after point" numbers as needed for final ans
            // printf("decimal is: %f\n",sign);
            ans = ans * 10.0f + (float)decimal; // addon the next decimal by enlarging the number by 10 and adding on
        }
    }
  return ans * sign; // if its supposed to be a negative, it will be. else nevermind
}