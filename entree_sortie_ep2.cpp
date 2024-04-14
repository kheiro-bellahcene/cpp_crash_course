#include<iostream>
using namespace std;

int main(){
	int X, Y;
	
	cout<<	"Entrée deux entiers : ";
	cin >>X>>Y;
	
	if (Y != 0)
		cout <<" Le résultat est :"<< (float)X/Y <<endl;
	else
		cerr <<"Division sur 0 impossible";
	return 0;
}
