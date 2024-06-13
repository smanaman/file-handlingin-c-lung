#include <stdio.h>
#include <string.h>

int main() {

    // form index

    FILE *fp; // file pointer

    char str[100]; // empty array

    fp = fopen("f3.txt","a"); // create a file name f1.txt , using write method

if (fp == NULL)
{
    printf("Error in file");
}else{
    printf("Enter your value:");
    gets(str);
    fputs(str,fp);
fputs("\n",fp);
fclose(fp);
}



}