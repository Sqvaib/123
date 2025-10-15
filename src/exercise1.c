#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){
    float array[10];
    float sum = 0.0;
    float x;    
    for(int i = 0; i < 10; i++){
        scanf("%f", &array[i]);
        sum += array[i];
    }
    x = sum/10.0;
    printf("%.3lf\n", x);
    return 0;
}