#include<iostream>
using namespace std;


int main(){
	// gestion normale 
	/*
	short *p;
	p = new (nothrow) short[100000000000000000];
	
	if (p == NULL)
		cerr << "Allocation impossible";
	else{
		p[0] = 100;	
		cout <<"Bonjour" << endl;	
		cout << p[0];
	*/	
	// gestion d'exception 
	short *p;
	try{
		p = new short[100000000000000];
		p[0] = 100;	
		cout <<"Bonjour" << endl;	
		cout << p[0];	
	}catch(bad_alloc ba){
		cerr <<"Allocation impossible" << endl;
		cerr << ba.what();		
	}
	
	

	
	
	return 0; 
}
