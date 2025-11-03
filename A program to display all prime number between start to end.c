#include <stdio.h>
int main(){
    int flag, i, j, start, end;
    printf("Enter the starting value : ");
    scanf("%d", &start);
    printf("Enter the ending number : ");
    scanf("%d", &end);
    for(i=start;i<=end;i++){
        flag = 0; 
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d  ", i);
    }
    printf("\n");
    return 0;
}