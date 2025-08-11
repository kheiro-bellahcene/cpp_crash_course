#include<iostream>
using namespace std;

class Tableau{
	
	private:
		short taille;
		int *valeurs;
	public:
		// constructeur par défaut 
		Tableau();
		
		Tableau(short t);	
		Tableau(short t, int *v);
		
		// constructeur par copie
		Tableau(Tableau &tt);
		
		// constructeur par déplacement
		Tableau(Tableau &&tt);
		
		// destructeur
		~Tableau();
		 
		short getTaille();
		int* getValeurs();
		
		
		void afficher(); 	
};

Tableau::~Tableau(){
	delete[] this->valeurs;
}
Tableau::Tableau(){
	this ->taille = 0;
	this ->valeurs = NULL;
	
}

Tableau::Tableau(short t){
	this->taille = t;
	this->valeurs = new int[t];
	for(int i=0; i < t; i++){
		this->valeurs[i] = 0;
	}
}

Tableau::Tableau(short t, int *v){
	this->taille = t;
	this->valeurs = new int[t];
	for(int i = 0; i < t; i++)
		this->valeurs[i] = v[i];
}

Tableau::Tableau(Tableau &tt){
	this->taille = tt.taille;
	this->valeurs = new int[tt.taille];
	
	for(int i=0; i < tt.taille; i++)
		this->valeurs[i] = tt.valeurs[i];
}

Tableau::Tableau(Tableau &&tt){
	this->taille = tt.taille;
	this->valeurs = new int[tt.taille];
	
	for(int i=0; i < tt.taille; i++)
		this->valeurs[i] = tt.valeurs[i];
		
	delete[] tt.valeurs;
}

void Tableau::afficher(){
	cout << "[" <<this->taille << "]" <<endl;
	for(int i = 0; i < this->taille; i++)
		cout << this->valeurs[i] << '\t';
	cout << "\n\n";
}

Tableau creerTableau(int c){
	int T[c];
	for(int i=0; i < c; i++)
		T[i] = i * 10;
	return Tableau(c, T);
}
int main(){
	
	Tableau T0 = Tableau();
	T0.afficher();
	
	Tableau T1(6);
	T1.afficher();
	
	int T[] = {-9, 0, 20, 45};
	Tableau T2(4, T);
	T2.afficher();	
	
	Tableau T3(T2);
	T3.afficher();
	
	Tableau T4(creerTableau(5));
	T4.afficher();
	return 0;
}
