#include <iostream>
#include <ctime>
#include <cstdlib>
#define N 20

using namespace std;

int main(int argc, char** argv) {
		
	srand (time(NULL));
	int pole[N];	/* deklarácia pole */
	int i;
	
	for(i=0; i<N; i++){		/* (použi ++ == 20) */	
		pole[i]= rand()%9999+10;		/* od 10 do 9999 */
	}
	
	for(i=0; i<N; i++){			
		cout <<""<< pole[i]<< endl;  /* vypis  pola */
	}
	
	int even=0;
		
		for(i=0; i<N; i++){
		if(pole[i]%2==0)  /* parne (delitelne parnym)  even == párne, N odd == nepárne */
		even++;
	}
	cout <<"\nPocet parnych cisel: "<<even<<"\nPocet neparnych cisel "<<N-even<<endl;
 	
 	int dvojcif=0;
 		for(i=0; i<N; i++){			/* dvojciferne cisla */
 		if(pole[i]<99)
 			dvojcif++;
	 }
	 
	 cout <<"\nPocet dvojcifernych cisel: "<< dvojcif<< endl;
	 
	int trojcif=0;
 		for(i=0; i<N; i++){			/* trojciferne cisla */
 		if(pole[i]<999)
 			trojcif++;
	 }
	 
	 cout <<"Pocet trojcifernych cisel: "<< trojcif<< endl;
	 
	int stvorcif=0;
 		for(i=0; i<N; i++){			/* stvorciferne cisla */
 		if(pole[i]<9999)
 			stvorcif++;
	 }
	 
	 cout <<"Pocet stvorcifernych cisel: "<< stvorcif<< endl;
	
	 int maxnum;
 			maxnum=pole[0];
 		for(i=1; i<N; i++){
    	if(maxnum<pole[i])   /* najvacsie */
        	maxnum=pole[i];
 	 }
 	 
	 cout <<"\nNajvacsie cislo:"<< maxnum<< endl;
		
	int minnum;
 			minnum=pole[0];
 		for(i=1; i<N; i++){
    	if(minnum>pole[i]) 	/* najmensie */
        	minnum=pole[i];
	 }
 	
	 cout <<"Najmansie cislo: "<< minnum<< endl;
 	
 	
	  cout <<"\nPole od konca:"<< endl;
 		for(i=N-1; i>=0; i--){	
        	cout<<""<< pole[i]<< endl;		/* pole od konca */
 	 }
 	
	 int a=0;
 		for(i=1; i<N; i++){ 	/* vsetky cisla delitelne 7 */
 		if(pole[i]%7==0)
 			a++;
 	 }
 			
	 cout<<"\nPocet cisel delitelne 7: "<<a<<endl;

	
	system("pause");
	return 0;
}
