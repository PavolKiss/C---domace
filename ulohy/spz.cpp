#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1

int main(){
	int i;
	int pole[N];
	
	printf("KE ");
	srand(time(NULL));
	for(i=0; i<N; i++)
	pole[i]=rand()%998+1;
	
	for(i=0;i<N;i++){
	printf("%d", pole[i]);  
	}
	
	for(i=0; i<N; i++) 
	{
		char letter=rand()%26+65; 
		pole[i]=letter;	
	}
	pole[2]='\0';		
	printf("%s", pole);
	
	for(i=0; i<N; i++) 
	{
		char letter=rand()%26+65; 
		pole[i]=letter;	
	}
	pole[3]='\0';		
	printf("%s", pole);

}

