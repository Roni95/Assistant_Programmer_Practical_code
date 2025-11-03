//Prime number checking
#include <stdio.h>
int main(){
    int flag=0, n, i;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(i=2; i<=(n/2); i++){
        if(n%i ==0){
            printf("Not a prime number");
            flag = 1; 
            break;
        }
    }
    if(flag==0)
        printf("The number is prime");
    return 0;
}
