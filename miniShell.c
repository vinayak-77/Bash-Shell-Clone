#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include <sys/wait.h>
#include<pthread.h>


void thread_ls(char **arg2){

    char arg[256] = "/home/vinayak/Desktop/shell_assignment1/ls";   //Change the path while running.
    int a = strlen(arg);
    
    
    
   

    if(!strcmp(arg2[1],"-a")){
        arg[a] = ' ';
        a = a+1;
        arg[a] = '-';
        arg[a+1] = 'a';
        arg[a+2] = '\n';
    }


    else if(!strcmp(arg2[1],"-r")){
        arg[a] = ' ';
        a = a+1;
        arg[a] = '-';
        arg[a+1] = 'r';
        arg[a+2] = '\n';
    }

    else if(arg2[1][0]=='-'){
        printf("ERROR: Invalid Command\n");
        
    }

    else{
        arg[a] = ' ';
        a = a+1;
        arg[a] = 'o';
    }

   system(arg);
}

void thread_mkdir(char **arg2){
    char arg[256] = "/home/vinayak/Desktop/shell_assignment1/mkdir";   //Change the path while running.
    int a = strlen(arg);
    
    
    
   

    if(!strcmp(arg2[1],"-v")){
        arg[a] = ' ';
        a = a+1;
        arg[a] = '-';
        a=a+1;
        arg[a] = 'v';
        a=a+1;
        arg[a] = ' ';
        a=a+1;
        
        char filename[100];
        strcpy(filename,arg2[2]);
        int b = strlen(filename);
        for(int i = 0;i<b;i++){
            arg[a+i] = filename[i];
        }
    }


    else if(!strcmp(arg2[1],"-m")){
        arg[a] = ' ';
        a = a+1;
        arg[a] = '-';
        a=a+1;
        arg[a] = 'm';
        a=a+1;
        arg[a] = ' ';
        a=a+1;
        char filename[100];
        strcpy(filename,arg2[2]);
        int b = strlen(filename);
        for(int i = 0;i<b;i++){
            arg[a+i] = filename[i];
        }
    }

    else if(arg2[1][0]=='-'){
        printf("ERROR: Invalid Command\n");
        
    }

    else{
        arg[a] = ' ';
        a = a+1;
        
        char filename[100];
        strcpy(filename,arg2[1]);
        int b = strlen(filename);
        for(int i = 0;i<b;i++){
            arg[a+i] = filename[i];
        }
    }

    
    
    
   system(arg);

}


void thread_rm(char **arg2){
    char arg[256] = "/home/vinayak/Desktop/shell_assignment1/rm";  //Change the path while running.
    int a = strlen(arg);
    
    
    
   

    if(!strcmp(arg2[1],"-i")){
        arg[a] = ' ';
        a = a+1;
        arg[a] = '-';
        a=a+1;
        arg[a] = 'i';
        a=a+1;
        arg[a] = ' ';
        a=a+1;
        
        char filename[100];
        strcpy(filename,arg2[2]);
        int b = strlen(filename);
        for(int i = 0;i<b;i++){
            arg[a+i] = filename[i];
        }
    }


    else if(!strcmp(arg2[1],"-f")){
       arg[a] = ' ';
        a = a+1;
        arg[a] = '-';
        a=a+1;
        arg[a] = 'f';
        a=a+1;
        arg[a] = ' ';
        a=a+1;
        
        char filename[100];
        strcpy(filename,arg2[2]);
        int b = strlen(filename);
        for(int i = 0;i<b;i++){
            arg[a+i] = filename[i];
        }
    }

    else if(arg2[1][0]=='-'){
        printf("ERROR: Invalid Command\n");
        
    }

    else{
        arg[a] = ' ';
        a = a+1;
       
        char filename[100];
        strcpy(filename,arg2[1]);
        int b = strlen(filename);
        for(int i = 0;i<b;i++){
            arg[a+i] = filename[i];
        }
    }

   system(arg);

}


void thread_date(char **arg2){
    char arg[256] = "/home/vinayak/Desktop/shell_assignment1/date";  //Change the path while running.
    int a = strlen(arg);
    
    
    
   

    if(!strcmp(arg2[1],"-u")){
        arg[a] = ' ';
        a = a+1;
        arg[a] = '-';
        arg[a+1] = 'u';
        arg[a+2] = '\n';
    }


    else if(!strcmp(arg2[1],"-r")){
        arg[a] = ' ';
        a = a+1;
        arg[a] = '-';
        a=a+1;
        arg[a] = 'r';
        a=a+1;
        arg[a] = ' ';
        a=a+1;
        char filename[100];
        strcpy(filename,arg2[2]);
        int b = strlen(filename);
        for(int i = 0;i<b;i++){
            arg[a+i] = filename[i];
        }
    }

    else if(arg2[1][0]=='-'){
        printf("ERROR: Invalid Command\n");
        
    }

    else{
        arg[a] = ' ';
        a = a+1;
        arg[a] = 'o';
    }

   system(arg);

}


void thread_cat(char **arg2){
    char arg[256] = "/home/vinayak/Desktop/shell_assignment1/cat";   //Change the path while running.
    int a = strlen(arg);
    
    
    
   

    if(!strcmp(arg2[1],"-n")){
        arg[a] = ' ';
        a = a+1;
        arg[a] = '-';
        a=a+1;
        arg[a] = 'n';
        a=a+1;
        arg[a] = ' ';
        a=a+1;
        
        char filename[100];
        strcpy(filename,arg2[2]);
        int b = strlen(filename);
        for(int i = 0;i<b;i++){
            arg[a+i] = filename[i];
        }
    }


    else if(!strcmp(arg2[1],"-e")){
        arg[a] = ' ';
        a = a+1;
        arg[a] = '-';
        a=a+1;
        arg[a] = 'e';
        a=a+1;
        arg[a] = ' ';
        a=a+1;
        
        char filename[100];
        strcpy(filename,arg2[2]);
        int b = strlen(filename);
        for(int i = 0;i<b;i++){
            arg[a+i] = filename[i];
        }
    }

    else if(arg2[1][0]=='-'){
        printf("ERROR: Invalid Command\n");
        
    }

    else{
        
        arg[a] = ' ';
        a=a+1;
        char filename[100];
        strcpy(filename,arg2[1]);
        int b = strlen(filename);
        for(int i = 0;i<b;i++){
            arg[a+i] = filename[i];
        }
    }

   system(arg);

}


void cd(char *cmd,char *arg1){
    char output[256];
    char path[100];
    for(int i = 0;i<strlen(arg1);i++){
        if(arg1[i]!='\n'){
            path[i] = arg1[i];
        }
        if(arg1[i]=='\n'){
            path[i] = '\0';
            break;
        }
    }
    


    if(chdir(path)!=0){
        perror("ERROR");
    }

    printf("Current directory is: %s\n",getcwd(output,256));


}

void pwd(char *cmd){
    char output[256];
    printf("Current directory is: %s\n",getcwd(output,256));

}

void echo(char* cmd,int n,char par[n][100]){

    

    int j = 1;
    if(!strcmp(par[1],"-n")){
        for(int i = 2;i<n;i++){
            int a = strlen(par[i]);
            if(par[i][a-1]=='\n'){
               for(int j = 0;j<a-1;j++){
                printf("%c",par[i][j]);

               }
               break;
            }
            else{
                printf("%s ",par[i]);
            }
        }
        return;
    }

    else if(!strcmp(par[1],"--help\n")){
        FILE *file = fopen("echo_help.txt","r");
        
       
        char buff;
        buff = fgetc(file);
        while(buff!=EOF){
            
            printf("%c",buff);
            
            buff = fgetc(file);
        
        

        
    
        }
        fclose(file);
        printf("\n");
    }
    else{
        for(int i = 1;i<n-1;i++){
            int a = strlen(par[i]);
            if(par[i][a-1]=='\n'){
                for(int j = 0;j<a-1;j++){
                    printf("%c",par[i][j]);

                }
                break;
            }
            printf("%s ",par[j]);
            j++;


            
        }
        printf("\n");
    }
}
    




void command(char *input){
    int n = strlen(input);
    char *delim  = " ";
    char *token;
    int s = 0;
    char *str = malloc(sizeof(char)*n);
    strcpy(str,input);
    token = strtok(input,delim);

    char par[n][100];

    while(token){
        strcpy(par[s],token);
        
        token = strtok(NULL,delim);
        s++;
    }

    char cmd[10];
    
    strcpy(cmd, par[0]);
    
    
    char arg1[100];

    if(strcmp(cmd,"pwd")){
    
        strcpy(arg1, par[1]);
    }

    char **arg2 = (char**)malloc(sizeof(char*)*n);
    for(int i = 0;i<100;i++){
        arg2[i] = malloc(sizeof(char)*100);
    }

   for(int i = 0;i<n;i++){
        arg2[i] = par[i];
   }

    arg2[n] = NULL;


    if(strcmp(cmd,"cd")==0){
        cd(cmd,arg1);
    }

    else if(strcmp(cmd,"cd\n")==0){
        char output[256];
        chdir(getenv("HOME"));
        printf("Current directory is: %s\n",getcwd(output,256));
    }

    else if(strcmp(cmd,"echo")==0){
        echo(cmd,n,par);
    }

    else if(strcmp(cmd,"pwd\n")==0 || strcmp(cmd,"pwd")==0){
        
        char output[256];
        if(strcmp(cmd,"pwd\n")==0){
            printf("%s\n",getcwd(output,256));
        }

        else if( strcmp(cmd,"pwd")==0 && (strcmp(arg2[1],"-L\n")==0 || strcmp(arg2[1],"-P\n")==0)){
             printf("%s\n",getcwd(output,256));
        }

        else{
            printf("ERROR: Invalid Command\n");
        }

    }

    else if(!strcmp(cmd,"ls\n")){
        
        int pid = fork();
            if(pid==0){
                const char output[256];
                
                execv("/home/vinayak/Desktop/shell_assignment1/ls",arg2);  //Change the path while running.
            }
            else{
                wait(NULL);
                return;
            }

    }

    else if(!strcmp(cmd,"ls")){

        int pid = fork();
        if(pid==0){
            const char output[256];
            
            execv("/home/vinayak/Desktop/shell_assignment1/ls",arg2);  //Change the path while running.
        }
        else{
            wait(NULL);
            return;
        }

        
    }

    else if(!strcmp(cmd,"mkdir")){
        int pid = fork();
        if(pid==0){
            const char output[256];
            
            execv("/home/vinayak/Desktop/shell_assignment1/mkdir",arg2);  //Change the path while running.
        }
        else{
            wait(NULL);
            return;
        }

    }

    else if(!strcmp(cmd,"rm")){
        
        int pid = fork();
        if(pid==0){
            const char output[256];
            
            execv("/home/vinayak/Desktop/shell_assignment1/rm",arg2);  //Change the path while running.
        }
        else{
            wait(NULL);
            return;
        }

    }

    else if(!strcmp(cmd,"cat")){
        
        int pid = fork();
        if(pid==0){
            const char output[256];
            
            execv("/home/vinayak/Desktop/shell_assignment1/cat",arg2);  //Change the path while running.
        }
        else{
            wait(NULL);
            return;
        }

    }

    else if(!strcmp(cmd,"date\n")){
        
        int pid = fork();
        if(pid==0){
            const char output[256];
            
            execv("/home/vinayak/Desktop/shell_assignment1/date",arg2);  //Change the path while running.
        }
        else{
            wait(NULL);
            return;
        }

    }

    else if(!strcmp(cmd,"date")){
        
        int pid = fork();
        if(pid==0){
            const char output[256];
            
            execv("/home/vinayak/Desktop/shell_assignment1/date",arg2);  //Change the path while running.
        }
        else{
            wait(NULL);
            return;
        }

    }

    

    

    free(token);
    free(str);


}



void thread(char *input){

    
    int n = strlen(input);
    char *delim  = " ";
    char *token;
    int s = 0;
    char *str = malloc(sizeof(char)*n);
    strcpy(str,input);
    token = strtok(input,delim);

    char par[n][100];

    while(strcmp(token,"&t\n")){
        strcpy(par[s],token);
        
        token = strtok(NULL,delim);
        s++;
    }

    char cmd[10];
    
    strcpy(cmd, par[0]);
    
    
    char arg1[100];

    if(strcmp(cmd,"pwd")){
    
        strcpy(arg1, par[1]);
    }

    char **arg2 = (char**)malloc(sizeof(char*)*n);
    for(int i = 0;i<100;i++){
        arg2[i] = malloc(sizeof(char)*100);
    }

    for(int i = 0;i<n;i++){
        arg2[i] = par[i];
   }

    arg2[n] = NULL;

    if(!strcmp(cmd,"ls")){
        pthread_t t1;
        pthread_create(&t1,NULL,(void*)&thread_ls,arg2);
        pthread_join(t1,NULL);
    }

    if(!strcmp(cmd,"mkdir")){
        pthread_t t1;
        pthread_create(&t1,NULL,(void*)&thread_mkdir,arg2);
        pthread_join(t1,NULL);
    }

    if(!strcmp(cmd,"rm")){
        pthread_t t1;
        pthread_create(&t1,NULL,(void*)&thread_rm,arg2);
        pthread_join(t1,NULL);
    }

    if(!strcmp(cmd,"date")){
        pthread_t t1;
        pthread_create(&t1,NULL,(void*)&thread_date,arg2);
        pthread_join(t1,NULL);
    }

    if(!strcmp(cmd,"cat")){
        pthread_t t1;
        pthread_create(&t1,NULL,(void*)&thread_cat,arg2);
        pthread_join(t1,NULL);
    }


  
}


int main(){

    system("clear");
    printf("=========================================================================== WELCOME TO CUSTOM SHELL ===========================================================================\n");
    
    char input[256];
    char exit[] = "exit";
    
    bool flag = false;
    while(!flag){
        printf(">> ");
        
        fgets(input,256,stdin);
        
        for(int i = 0;i<strlen(exit);i++){
            if(input[i]==exit[i]){
                flag = true;
            }

            else{
                flag = false;
                break;
            }
        }
        if(flag){
            break;
        }

        else{
            int n = strlen(input);
            if(input[n-3]=='&' && input[n-2]=='t'){
               
                thread(input);
            }
            else{
                command(input);
            }
            
        }

    }
    
    return 0;

}