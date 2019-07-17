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
}
}

