#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <sys/wait.h>
#include<dirent.h>


int main(int argc,char *argv[]){

  if(!strcmp(argv[1],"-n")){
    char filename[strlen(argv[2])] ;
    for(int i = 0;i<strlen(argv[2]);i++){
      if(argv[2][i]=='\n'){
        break;
      }
      filename[i] = argv[2][i];
      
    }

    FILE *file = fopen(filename,"r");
    if(file==NULL){
      
      perror("File does not exist");
    }

    
    else{
      int line_no = 1;
      bool isnew = true;
      char buff;
      buff = fgetc(file);
      while(buff!=EOF){
        if(isnew){
          printf(" %d ",line_no);
          isnew = false;
        }

        printf("%c",buff);
        if(buff=='\n'){
          isnew = true;
          line_no++;
        }
        buff = fgetc(file);
      }
    }

    fclose(file);
    printf("\n");
  }

  else if(!strcmp(argv[1],"-e")){

    
    char filename[strlen(argv[2])] ;
    for(int i = 0;i<strlen(argv[2]);i++){
      if(argv[2][i]=='\n'){
        break;
      }
      filename[i] = argv[2][i];
      
    }

    FILE *file = fopen(filename,"r");
    if(file==NULL){
     
      perror("File does not exist");
    }

    else{
      char buff;
      buff = fgetc(file);
      while(buff!=EOF){
        if(buff=='\n'){
          printf("$");
        }
        printf("%c",buff);
        
        buff = fgetc(file);
      }
    }

    fclose(file);
    printf("\n");
  }


  else if(argv[1][0]=='-'){
    printf("ERROR: Invalid command\n");
  }

  else{
    char filename[strlen(argv[1])] ;
    for(int i = 0;i<strlen(argv[1]);i++){
      if(argv[1][i]=='\n'){
        break;
      }
      filename[i] = argv[1][i];
      
    }

    FILE *file = fopen(filename,"r");
    if(file==NULL){
     
      perror("File does not exist");
    }

    else{
      char buff;
      buff = fgetc(file);
      while(buff!=EOF){
        printf("%c",buff);
        buff = fgetc(file);
      }
    }

    fclose(file);
    printf("\n");
    
  }

}