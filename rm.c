#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include <sys/wait.h>


int main(int argc,char *argv[]){

  if(!strcmp(argv[1],"-i")){
    char filename[strlen(argv[2])] ;
    for(int i = 0;i<strlen(argv[2]);i++){
      if(argv[2][i]=='\n' || argv[2][i]==' ' || !argv[2][i]){
        break;
      }
      filename[i] = argv[2][i];
      
    }

    printf("Do you want to delete the file %s (y/n) ?",filename);
    char ans;
    scanf("%c",&ans);
    if(ans=='y'){
      if(remove(filename)!=0){
        perror("ERROR");
      }
      printf("\n");
    }
    else{
      printf("\n");
    }
  }

  else if(!strcmp(argv[1],"-f")){
    char filename[strlen(argv[2])] ;
    for(int i = 0;i<strlen(argv[2]);i++){
      if(argv[2][i]=='\n' || !argv[2][i]){
        break;
      }
      filename[i] = argv[2][i];
      
    }
    
    if(remove(filename)!=0){
      perror("ERROR");
    }
  }

  else if(argv[1][0]=='-'){
    printf("ERROR: Invalid Command\n");
  }


  else{
  
    char filename[strlen(argv[1])] ;
    for(int i = 0;i<strlen(argv[1]);i++){
      if(argv[1][i]=='\n' || !argv[1][i]){
        break;
      }
      filename[i] = argv[1][i];
      
    }
    
    if(remove(filename)!=0){
      perror("ERROR");
    }

  }


  return 0;
  
}



