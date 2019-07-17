#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h> 
#include <unistd.h> 

int main(void){
	printf("Bienvenue dans le script fork C");
	pid_t processID;
	processID = fork();	
	if (processID ==0){
		printf("Coucou c'est moi le fils");
		char *args[]={"./exectarget",NULL}; 
        execvp(args[0],args); 
      
        /*All statements are ignored after execvp() call as this whole  
        process(execDemo.c) is replaced by another process (EXEC.c) 
        */
        printf("Ending-----");
}
}

