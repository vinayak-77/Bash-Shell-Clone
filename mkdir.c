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

  

  if(!strcmp(argv[1],"-v")){
    char filename[strlen(argv[2])] ;
    for(int i = 0;i<strlen(argv[2]);i++){
      if(argv[2][i]=='\n' || !argv[2][i]){
        break;
      }
      filename[i] = argv[2][i];
      
    }

    if(mkdir(filename,0777)==0){
      printf("mkdir: created directory %s",filename);
      printf("\n");
    }

    else{
      perror("ERROR");
    }
  }

  else if(!strcmp(argv[1],"-m")){

    int mode = atoi(argv[2]);
    char filename[strlen(argv[3])] ;
    for(int i = 0;i<strlen(argv[3]);i++){
      if(argv[3][i]=='\n' || !argv[3][i]){
        break;
      }
      filename[i] = argv[3][i];
      
    }

    if(mkdir(filename,mode)==0){
      printf("Mode of the file set to %d",mode);
      printf("\n");
    }

    else{
      perror("ERROR");
    }
  }


  else if(argv[1][0]=='-'){
    printf("ERROR: Invalid command\n");
  }

  else{
    char filename[strlen(argv[1])] ;
    for(int i = 0;i<strlen(argv[1]);i++){
      if(argv[1][i]=='\n' || !argv[1][i]){
        break;
      }
      filename[i] = argv[1][i];
      
    }

    if(mkdir(filename,0777)==0){
      printf("\n");
    }

    else{
      perror("ERROR");
    }
  }

}