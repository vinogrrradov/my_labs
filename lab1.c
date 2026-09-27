#include <stdio.h>
#include <math.h>

int main(){
    double x, y, U;
    double term1, term2;
    double result = 1.0;

    for (int i = 0; i <= 3; i++){  
        x = 1.0 + i*0.3;
        for (int j = 0; j <= 1; j++){
            y = 2.0 + j*0.5;
            if (x/(y*y) < 1.0){
                term1 = cos(x*x*x - sqrt(y));
                term2 = pow(x*y*y, 1.0/3.0);
                if (term1 > term2){
                    U = term1;
                } else{
                    U = term2;
                }
            } else{
                U = log(y*y - x);
            }
            printf("x:%.2f | y:%.2f | U:%7.4f \n", x, y, U); 
            result *= U;
        }
    }
    printf("result U: %.5f\n", result);
    return 0;
}