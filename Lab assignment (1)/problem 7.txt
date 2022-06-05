//Write a C program to print prime number from 1 to 200

#include<stdio.h>
int main(){
int i,n;

for(i=2; i<=200; i++){
    for(n=2; n<=i; n++){
        if(i%n==0){
            break;
        }
    }
    if(i==n){
    
        printf("Prime number is:%d\n", i);
    }
}
return 0;
}