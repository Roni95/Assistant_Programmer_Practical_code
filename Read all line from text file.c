//Read all line from text file 
/* 
    Author: Md Abid Hasan Roni Bokshi
    Date: 10-05-2025
    Mail: abidhasanroni@gmail.com
*/
#include <stdio.h>
int main(){
    char name[100];
    printf("Enter the File Name: ");
    scanf("%s", name);
    printf("File Name is : %s\n", name);
    FILE *file;
    file = fopen(name, "r");
    char line[100];
    while(fgets(line,100, file)){
        printf("%s", line);
    }
    printf("\n");
    fclose(file);
    return 0;
}
