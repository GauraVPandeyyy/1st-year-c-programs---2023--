#include<stdio.h>
int main () {
float frnt; 
printf("enter value of farhenhiet  : ");
scanf("%f",&frnt);

float celsius = (frnt -32) * 5/9;
printf("CELSIUS IS  :  %f",celsius);
}