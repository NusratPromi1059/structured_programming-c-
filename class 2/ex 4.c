#include <stdio.h>

int main(){

    int Num, reversed_num = 0, remainder;

    printf("Enter the number to reverse: ");

    scanf("%d", &Num);    

    while (Num != 0){

        remainder = Num % 10;

        reversed_num = reversed_num * 10 + remainder;

        Num = Num/10;

    }    

    printf("The reversed number is: %d\n", reversed_num);
    if(reversed_num==Num){
    	
    	printf("Numbers are equal");
    	
    	
	}
	else{
		
	printf("Numbers are not equal");
    	
		
	}
     
    return 0;

}