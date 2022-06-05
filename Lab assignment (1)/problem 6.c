// Write a program in C to display n terms of even number and their sum

#include<stdio.h>
int main(){
int i, n, sum = 0;

printf("Enter The Even Number: ");
scanf("%d", &n);

for(i= 1; i<= n; i++){
    if(i % 2==0)
        sum = sum + i;
}

printf("Sum of ever number from 1 to %d is %d\n", n, sum);
return 0;
}