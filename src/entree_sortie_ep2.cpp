#include<iostream>
using namespace std;

int main(){
	int X, Y;
	
	cout<<	"Entr�e deux entiers : ";
	cin >>X>>Y;
	
	if (Y != 0)
		cout <<" Le r�sultat est :"<< (float)X/Y <<endl;
	else
		cerr <<"Division sur 0 impossible";
	return 0;
}
