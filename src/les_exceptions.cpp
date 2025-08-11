#include<iostream>
using namespace std;
/**
int factoriel(int x){
	int fact = 1;
	for(int i=2; i <= x; i++)
		fact *= i;
	
	return fact;
**/
int factoriel(int x){
	if (x < 0){
		throw x;}
	else{
		int fact = 1;
		for(int i=2; i <= x; i++){
			fact *= i;}	
		return fact;
	}
}

int main(){
	/**
	if (A < 0)
		cerr << "impossible de calculer " << A << "!";
	else
		cout << A << "! = " << factoriel(A);
	**/	
	int A;
	cin >> A;
	
	try{
		int R = factoriel(A);
		cout << A << "! =" << R;
	}catch(int e){
		cerr << "impossible de calculer " << e << "!";
	}
	  
	
	return 0;
}
