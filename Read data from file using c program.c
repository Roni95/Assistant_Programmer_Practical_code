//Read data from file using program 
// Author: Md Abid Hasan Roni Bokshi


#include <stdio.h>
int main(){
    FILE *file;
    file = fopen("test.txt","r");
    char text[100];
    fgets(text, 100, file);
    printf("%s",text);
    fclose(file);
    return 0;
}
