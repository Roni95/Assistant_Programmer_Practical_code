//GCD of two number
#include <stdio.h>
int main(){
    int a ,b, gcd;
    printf("Enter two number : ");
    scanf("%d%d", &a , &b);
    gcd = (a<b) ? a:b;
    while(gcd>0){
        if((a%gcd==0) && (b%gcd==0))
            break;
        gcd--;
    }
    printf("GCD is %d\n", gcd);
    return 0;
}
