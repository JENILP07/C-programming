#include<stdio.h>
void main(){
    int unit;
    float total_bill;
    printf("Enter an Unit:");
    scanf("%d",&unit);
    if(unit<=50){
        total_bill=unit*.50;
    }
    if(unit>50 && unit<=150){
    total_bill=50*.50+(unit-50)*.75;
    }
    if(unit>150 && unit<=250){
    total_bill=50*.50+100*.75+(unit-150)*1.20;
    }
    printf("Total Bill=%f",total_bill);
}