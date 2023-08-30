#include<stdio.h>
void main(){
    float a,b;
    char n;
     printf("Enter the operation:");
    scanf("%c",&n);
    printf("Enter Val of a:");
    scanf("%f",&a);
    printf("Enter Val of b:");
    scanf("%f",&b);
    if(n=='-'||n=='+'||n=='/'||n=='*')
    {
        if(n=='+')
        {
        printf("Add=%f",a+b);
        }
    else if(n=='-')
    {
        printf("Sub=%f",a-b);
    }
    else if(n=='/'){
		if(b==0){
			printf("not defined");
		}
		else{
        printf("Divide=%f",a/b);}}
    else if(n=='*') 
    {
           printf("Multiply=%f",a*b);
        }
    else
    {
     printf("Incorrect operation");
    }
}}
