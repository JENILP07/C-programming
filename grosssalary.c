#include<stdio.h>
void main(){
    float a;
    printf("Baic Salary:",&a);
    scanf("%f",&a);
     if(a>=30000){
        printf("Gross Salary=%f",a+(a*.3)+(a*.95));
        }
    else if(a>=20000){
        printf("Gross Salary=%f",a+(a*.25)+(a*.9));
    }
    else if(a>=10000){
        printf("Gross Salary=%f",a+(a*.2)+(a*.8));
    }
}
