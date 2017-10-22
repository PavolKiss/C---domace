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
	if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b){
													cout <<"Trojuholnik je pravouhly"<<endl;
		 				   							}
		else {
				cout <<"Trojuholnik nieje pravouhly"<<endl;
			 }
return 0;
}
