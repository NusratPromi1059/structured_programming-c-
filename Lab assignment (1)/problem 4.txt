//Write a program in C to make such a pattern like a pyramid with numbers increases by 1

#include<stdio.h>
int main(){
int i, j, n, num = 1;

printf("Enter the value of rows: ");
scanf("%d", &n);

for(i=1;i<=n; i++){
    for(j=1; j<=i;j++){
        printf("%d",num);
        num++;
    }
    
    printf("\n");

}
return 0;
}