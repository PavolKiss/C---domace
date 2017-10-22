#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int a,b,c;
	cout <<"Vypis A"<<endl;
	cin >>a;
	cout <<"Vypis B"<<endl;
	cin >>b;
	cout <<"Vypis C"<<endl;
	cin >>c;
	if(a+b>c || b+c>a || a+c>b){
		cout <<"Trojuholnik so stranami A,B,C sa da zostrojit"<<endl;
		 				   }
		else {
		
		cout <<"Trojuolnik so stranami A,B,C sa neda zostrojit"<<endl;
			 }
return 0;
}
