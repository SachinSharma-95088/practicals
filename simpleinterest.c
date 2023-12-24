#include <stdio.h>
void main()
{
    float princ ,rate , time;
    princ=1000;
    rate =7;
    time= 10;

    float SI;
   
    SI= (princ*rate*time)/100;

    printf("Simple interest is %f",SI);

}