#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	char underscores [8] = {'_','_','_','_','_','_','_','\0'};
	char city [8] = "roznava";
	int i, j, tries = 7;
	char letter;
	
	for(i=0; i<tries; i++){
		printf("Enter a letter:\n ");
		scanf("\n%c", &letter);
		
	for(j=0; j<7; j++){			//meni z pomlcok na pismena
		if(letter == city[j])
			underscores[j] = letter;
		
	}
	
	printf("\nResult: %s ", underscores);
	
	if(strcmp(underscores,city)==0)  //porovnava
    	return 0;
	
	}
	
	printf("\nYou failed!");
}
