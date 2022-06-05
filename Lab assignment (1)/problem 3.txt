// Write a program in C to display n terms of odd number and their sum

#include<stdio.h>
int main(){
int i, n, sum=0;
 
printf("Enter Odd Number: ");
scanf("%d", &n);
  
for (i=1; i<=n; i++){
    printf("%d", 2*i-1);
    sum += (2*i-1);
}

printf("\n Sum of odd number upto %d terms: %d\n",n,sum);
 
 return 0;
}