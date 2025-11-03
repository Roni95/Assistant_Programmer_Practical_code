//Find the length of a String without using built in function
#include <stdio.h>
int main(){
    int i=0, l=0;
    char n[100];
    printf("Enter the String : ");
    gets(n);
    while(n[i]!='\0'){
        i++;
        l++;
    }
    printf("The length is : %d\n", l);
    return 0;
}
