//Write a C program to find 1 + 1/2 + 1/3 + ... + 1/n
#include <stdio.h>
int main(){
    int n, i;
    float sum = 0.0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for(i=1; i<=n;i++){
        sum += 1.0/i;
    } 
    printf("Sum is %f\n", sum);
    return 0;
}