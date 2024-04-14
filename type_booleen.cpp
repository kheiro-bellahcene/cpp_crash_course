#include<iostream>
using namespace std; 



int main(){
	
/**	
	bool b(true);
	bool a(false);
	if(b and not a){
		cout << "c'est vrai frero"<<endl;
		cout << "Monsieur developpeur c++ tu vas réussir entretien tkt"<<endl;


	cout << "*********** Les manipulateur de flux pour Bool ***********"<<endl;
	// manipulateur de flux boolalpha permet d'afficher les valeurs booléene sous forme 
	// textuelle.
	
	bool b(true);
	cout << boolalpha << b << endl;
	// deuxième manipulateur noboolalpha qui est activer par défaut permet d'annuler effet 
	// boolalpha
	cout <<noboolalpha << b <<endl;
**/
	bool b = true;
	cout << b << endl;
	cout << boolalpha << b << endl;
	b = 0;
	cout << b << endl;
	b = -999;
	cout << b << endl;
	 
	b = NULL;
	cout << b << endl;
	
	b = b + 2;
	cout << b << endl;
	cout << "------\n";
	b = 50000 < 5;
	cout << b << endl;	
	
	b = true && true;
	cout << b <<endl;		
	
	// bit à bit operateur xor ou exlusif
	b ^= 1;
	cout << noboolalpha; 
	cout << boolalpha << b << endl;
	
	return 0;
}
