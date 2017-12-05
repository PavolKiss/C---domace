#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int a;
  int b;  
} numbers;



int main(int argc, char *argv[]) {
	numbers pos[50];
  FILE *f=fopen("numbers.txt","r");
  	if(f==NULL){
     printf("ERROR!!");
     return 1;
 }
   FILE *fw=fopen("circuit_and_content.txt","w");
  	if(fw==NULL){
     printf("ERROR!!");
     return 2;
 }
 	int c=0;
	 while(fscanf(f,"%d %d", &pos[c].a,&pos[c].b)!=EOF)
	 
	 {
	 	fprintf(fw,"A:%d B:%d Circuit:%d Content:%d \n",pos[c].a,pos[c].b,pos[c].a*pos[c].b,(pos[c].a)+(pos[c].b));
	 	c++;
	 } 
    
	fclose(f);
    fclose(fw); 
	
	
	return 0;

}
