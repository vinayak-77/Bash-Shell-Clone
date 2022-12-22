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
#include<time.h>



int main(int argc,char *argv[]){

  

  if(!strcmp(argv[1],"-u\n") || !strcmp(argv[1],"-u")){
    time_t display;
    
    time(&display);

    struct tm* changed_time;
   
    changed_time = gmtime(&display);

    char *mon[] = {"Jan","Feb","March","April","May","June","July","Aug","Sept","Oct","Nov","Decr"};
    char *day[] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};

    printf("%s %s %d %d:%d:%d %s %d\n",day[changed_time->tm_wday],mon[changed_time->tm_mon],changed_time->tm_mday,changed_time->tm_hour,changed_time->tm_min,changed_time->tm_sec,changed_time->tm_zone,changed_time->tm_year+1900);
      
    
  }

  else if(!strcmp(argv[1],"-r")){

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
      fclose(file);
    }
    

    else{
    

      struct stat filecheck;
      stat(filename,&filecheck);
      printf("%s\n",ctime(&filecheck.st_atime));
      fclose(file);
    }
  }


  else if(argv[1][0]=='-'){
    printf("ERROR: Invalid command\n");
  }

  else{

    time_t display;
    display = time(NULL);

    printf("%s\n",ctime(&display));
  }

}