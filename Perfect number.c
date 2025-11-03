//Perfect number checking 
//Perfect number means sum of all divisor of a number is equal to that number 
#include <stdio.h>
int main(){
    int number, sum = 0, i;
    printf("Enter the number : ");
    scanf("%d", &number);
    for(i=2;i<number; i++){
        if(number%i==0)
            sum += i;
    }
    if(sum==number)
        printf("This is perfect number\n");
    else 
        printf("This is not a perfect number\n");
    return 0;
}