//Write a program in C to make such a pattern like a pyramid with an asterik

#include<stdio.h>
int main(){
int i,n,j;

printf("Enter the numbers of you want to printed: ");
scanf("%d", &n);

for(i=1; i<=n; i++){
    for(j=1; j<=i; j++){
        printf("* ");
    }
    
    printf("\n");
}
return 0;
}