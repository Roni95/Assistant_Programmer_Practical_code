//Most frequently used number in an array 
#include <stdio.h>
int main(){
    int size;
    printf("Enter the Size : ");
    scanf("%d", &size);
    int array[size], value, i,j, max_count=0, count;
    printf("Enter the elements of the array : ");
    for(i=0;i<size;i++){
        scanf("%d", &array[i]);
    }
    for(i=0;i<size;i++){
        count = 0;
        for(j=0;j<size;j++){
            if(array[i]==array[j]){
                count++;
            }
        }
        if(count > max_count){
            max_count = count;
            value = array[i];
        }
    }
    printf("Frequently used number is: %d\n", value);
    return 0;
}