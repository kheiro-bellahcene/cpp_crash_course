#include<iostream>
#include<iomanip>

using namespace std;


int main ()
{

//cout <<"/*****************  	manipulateur pour int		******************/"<<endl;
/**	
	// Formater l'affichage d'un entier en Hexadécimale
	cout << hex << 15 << endl;
	// Formater l'affichage d'un entier en Octale
	cout << oct << 15 << endl;
	// Formater l'affichage d'un entier en Decimale 
	cout << dec << 0xF << endl;
	// setbase() dans <iomanip> --> Formater l'affichage d'un 
	// entier suivant une base 
	
	cout << setbase(10) << 020 << endl;
	// manipulateur de flux showbase pour afficher la base et 
	//manipulateur de flux hex formate 15 en F dans la base hexa
	
	cout << showbase << hex << 15 << endl;
	cout << endl;
	cout << noshowbase << oct << 077 << endl;
	
// cout <<"/*****************  	manipulateur pour float		******************/
/**
	// manipulateur scientific Affichage d'un réel avec la notation scientifique
	
	float f = 0.00015;
	cout << scientific << f << endl;

	// manipulateur fixed pour affichage d'un réel avec un nombre fixe après point décimale 
	
	cout.precision(4);
	
	cout << fixed << 1.5 << endl;
	cout << 0.00019 << endl;
	cout << 0.0001499 << endl;
	
	// setprecision de la biblio <iomanip> permet de changer la precision des valeurs réelles 
	// envoyée vers la sortie
	
	float f1 = 15.7765;
	cout << setprecision(4) <<f1;
	cout << endl << fixed <<f1<<endl;
cout <<"// showpoint affichage d'un point decimale malgré si il nbr contient pas de flot apres ,"<< endl;
	
	float f2 = 15;
	cout << noshowpoint;
	cout << f2 << endl;
	cout <<showpoint<<f2<<endl;
	**/
/**cout <<"// uppercase --> mettre les caractere dans Hex et les exposant en Maj"<<endl;
	
	cout << uppercase << hex << 15;
	cout << endl;
	cout << scientific << 0.0001<<endl; 
	cout << nouppercase << hex << 15<<endl;
	cout << 0.0001;
**/

	return 0;

}
