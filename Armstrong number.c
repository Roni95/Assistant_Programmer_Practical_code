// Program to check a number is Armstrong.. Note: number of digit, power on each digit, summed them up 
#include <stdio.h>
#include <math.h>
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);
    int temp = number, digit = 0, d, sum =0,i;
    while(temp){
        temp = temp/10;
        digit++;
    }
    printf("number of digit is : %d\n", digit );
    temp = number;
    while(temp){
        d = temp % 10;
        temp /= 10;
        sum = sum + pow(d,digit);
    }
    if(sum==number)
        printf("The number is Armstrong\n");
    else 
        printf("The number is not Armstrong\n");
    return 0;
}