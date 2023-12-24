
#include<stdio.h>
float CtF(float celcius);
float FtC(float fehrenheit);

int main(){
    float farh =CtF(100);
    float celc= FtC(100);
    printf("farhenheit is %f\n",farh);
    printf("celcius is %f\n",celc);
    return 0;
}
float CtF(float celcius){
    float farh = celcius*(9.0/5.0)+32;
    return farh;
}
float FtC(float fahrenheit){
    float celc= (fahrenheit -32)*5/9;
    return celc;
}