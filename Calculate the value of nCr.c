// Find the value of nCr (Combination)
#include <stdio.h>
int main(){
    int n, r, factn=1, factnr=1, factr=1,i;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Enter the value of r : ");
    scanf("%d", &r);
    for(i=1; i<=n; i++)
        factn *= i;
    for(i=1; i<= n-r; i++)
        factnr *= i;
    for(i=1; i<=r; i++)
        factr *= i;
    int nCr = factn / (factnr*factr);
    printf("The of nCr is : %d\n", nCr);
    return 0;
}