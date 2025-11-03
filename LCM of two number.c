//LCM of two number (Using GCD)
#include <stdio.h>
int main(){
    int a ,b, gcd, lcm;
    printf("Enter two number : ");
    scanf("%d%d", &a , &b);
    gcd = (a<b) ? a:b;
    while(gcd>0){
        if((a%gcd==0) && (b%gcd==0))
            break;
        gcd--;
    }
    lcm = (a*b)/gcd;
    printf("LCM is %d\n", lcm);
    return 0;
}