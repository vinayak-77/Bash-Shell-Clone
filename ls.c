#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include <sys/wait.h>
#include<dirent.h>




int main(int argc,char *argv[]){

    
  
  if(!strcmp(argv[1],"-a\n") || !strcmp(argv[1],"-a")){
    
    char path[256];
    getcwd(path,256);
    struct dirent *directory;
    DIR *dir = opendir(path);

    if(dir==NULL){
      perror("ERROR");
    }
    else{
      while((directory=readdir(dir))!=NULL){
        printf("%s  ",directory->d_name);
      }
    }
    printf("\n");
  }



  else if(!strcmp(argv[1],"-r\n") || !strcmp(argv[1],"-r")){
    char path[256];
    getcwd(path,256);
    struct dirent *directory;
    DIR *dir = opendir(path);

    if(dir==NULL){
      perror("ERROR");
    }
    else{
      int i = 0;
      char dir_name[256][100];
      while((directory=readdir(dir))!=NULL){
      if(directory->d_name[0]=='.'){
        continue;
      }
      else{
        strcpy(dir_name[i],directory->d_name);
        i++;
      }

        
      
      }

      int n = i;
      for(int j = n;j>=0;j--){
        printf("%s  ",dir_name[j]);
      }
    }
    printf("\n");
  }

  else if(argv[1][0]=='-'){
    printf("ERROR: Invalid command\n");
  }


  else{
    
    char path[256];
    getcwd(path,256);
    struct dirent *directory;
    DIR *dir = opendir(path);

    if(dir==NULL){
      perror("ERROR");
    }

    else{
      while((directory=readdir(dir))!=NULL){
        if(directory->d_name[0]=='.'){
          continue;
        }
        printf("%s  ",directory->d_name);
      }
    }
      printf("\n");
  }
  

}