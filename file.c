#include <stdio.h>
#include <string.h>

int main() {

    // form index

    FILE *fp; // file pointer

    char str[100]; // empty array

    fp = fopen("f1.txt","w"); // create a file name f1.txt , using write method

    printf("Enter your text : "); // ask user to enter a text

    fgets(str,sizeof(str),stdin); // size of s

    for(int i=0;i<strlen(str);i++){

            fputc(str[i],fp); // buffer a file
      
    }
 
    fclose(fp); // close a file

   

}