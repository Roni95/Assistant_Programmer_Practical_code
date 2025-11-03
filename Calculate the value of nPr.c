// Find the value of nPr (Permutation)
#include <stdio.h>
int main(){
    int n, r, factn=1, factnr=1,i;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Enter the value of r : ");
    scanf("%d", &r);
    for(i=1; i<=n; i++)
        factn *= i;
    for(i=1; i<= n-r; i++)
        factnr *= i;
    int npr = factn / factnr;
    printf("The of nPr is : %d\n", npr);
    return 0;
}