#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int den, mesiac;
	cout <<"Zadaj den"<<endl;
	cin >>den;
	cout <<"Zadaj mesiac"<<endl;
	cin >>mesiac;
	if(mesiac==2 && den==30 || den==31){
		cout <<"Takyto den v nasom kalendari neexistuje :)"<<endl;
	}

switch(mesiac){

	case 1:  if(den >=1 && den<=20){
	cout<<"Tvoje znamenie je: Kozorozec"<<endl;
	
	} if(den>=21&&den<=31)
	cout<<"Tvoje znamenie je: Vodnar"<<endl;
	break;
	
	case 2:  if(den >=1 && den<=19){ 
	cout<<"Tvoje znamenie je: Vodnar"<<endl;
	
	} if(den>=20&&den<=31)
	cout<<"Tvoje znamenie je: Ryby"<<endl;
	break;
		
	case 3:  if(den >=1 && den<=20){
	cout<<"Tvoje znamenie je: Ryby"<<endl;
	
	} if(den>=21&&den<=31)
	cout<<"Tvoje znamenie je: Baran"<<endl;
	break;
	
	case 4:  if(den >=1 && den<=20){
	cout<<"Tvoje znamenie je: Baran"<<endl;
	
	} if(den>=21&&den<=31)
	cout<<"Tvoje znamenie je: Byk"<<endl;
	break;
	
	case 5:  if(den >=1 && den<=21){
	cout<<"Tvoje znamenie je: Byk"<<endl;
	
	} if(den>=22&&den<=31)
	cout<<"Tvoje znamenie je: Blizenci"<<endl;
	break;
	
	case 6:  if(den >=1 && den<=21){
	cout<<"Tvoje znamenie je: Blizenci"<<endl;
	
	} if(den>=22&&den<=31)
	cout<<"Tvoje znamenie je: Rak"<<endl;
	break;
	
	case 7:  if(den >=1 && den<=22){
	cout<<"Tvoje znamenie je: Rak"<<endl;
	
	} if(den>=23&&den<=31)
	cout<<"Tvoje znamenie je: Lev"<<endl;
	break;
	
	case 8:  if(den >=1 && den<=23){
	cout<<"Tvoje znamenie je: Lev"<<endl;
	
	} if(den>=24&&den<=31)
	cout<<"Tvoje znamenie je: Panna"<<endl;
	break;
	
	case 9:  if(den >=1 && den<=23){
	cout<<"Tvoje znamenie je: Panna"<<endl;
	
	} if(den>=24&&den<=31)
	cout<<"Tvoje znamenie je: Vahy"<<endl;
	break;
	
	case 10:  if(den >=1 && den<=23){
	cout<<"Tvoje znamenie je: Vahy"<<endl;
	
	} if(den>=24&&den<=31)
	cout<<"Tvoje znamenie je: Skorpion"<<endl;
	break;
	
	case 11:  if(den >=1 && den<=22){
	cout<<"Tvoje znamenie je: Skorpion"<<endl;
	
	} if(den>=23&&den<=31)
	cout<<"Tvoje znamenie je: Strelec"<<endl;
	break;
	
	case 12:  if(den >=1 && den<=21){
	cout<<"Tvoje znamenie je: Strelec"<<endl;
	
	} if(den>=22&&den<=31)
	cout<<"Tvoje znamenie je: Kozorozec"<<endl;
	break;
		
}
	 




	
	
	return 0;
}
