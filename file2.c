#include <stdio.h>
#include <string.h>

int main() {

    // form index

 FILE *fp;// file pointer

   char s[100]; // empty array

fp=fopen("demo.txt","w");  // create a file name f1.txt , using write method
     

     if(fp==NULL){
        printf("Error in file");
     }else{
        printf("Enter yuor value:");
        gets(s);
        fputs(s,fp);
        fclose(fp);
     }


}