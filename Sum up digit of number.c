// if given number = 254189 sum = 29 (1st step) sum = 11 (2nd step) sum = 2 final step
#include <stdio.h>
int main(){
    long number, sum = 0 ;
    printf("Enter the number : ");
    scanf("%ld", &number);
    int i =0;
    while(number>9){
        i++;
        long temp = number;
        while(temp!=0){
            sum += (temp%10);
            temp = temp/10;
        }
        if(sum>9)
            printf("Sum = %ld (%d Step)\n", sum, i);
        number = sum;
        sum =0;
    }
    printf("Sum = %ld Final Step\n", number);
    return 0;
}