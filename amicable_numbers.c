#include <stdio.h>
int main() {
    int num1,num2,x,y,factor1sum=0,factor2sum=0;
    printf("Enter positive integer num1: ");
    scanf("%d", &num1);
    printf("Enter positive integer num2: ");
    scanf("%d", &num2);
    
    for (x = 1; x < num1; ++x){
        if (num1 % x == 0) {
            factor1sum = factor1sum+x;
        }
    }
            printf("The sum of all the factors of %d is %d\n", num1, factor1sum);
    for (y = 1; y < num2; ++y){
        if (num2 % y == 0) {
            factor2sum = factor2sum+y;
        }
    }
            printf("The sum of all the factors of %d is %d\n", num2, factor2sum);
    if((num1 ==factor2sum) && (num2 == factor1sum)){
        printf("%d and %d are Amicable numbers\n",num1,num2);
    }else{
        printf("%d and %d are not Amicable numbers\n",num1,num2);
    }
    
}

output

Enter positive integer num1: 220     
Enter positive integer num2: 284
The sum of all the factors of 220 is 284
The sum of all the factors of 284 is 220
220 and 284 are Amicable numbers
