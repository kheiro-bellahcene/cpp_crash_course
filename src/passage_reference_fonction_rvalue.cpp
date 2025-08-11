#include<iostream>
using namespace std;

typedef struct{
	int jour;
	int mois;
	int an;
}Date;

void afficher(Date &d){
	cout << d.jour << "/"<< d.mois << "/" << d.an <<endl;
	
}
void afficher(Date &&d){
	cout << d.jour << "/"<< d.mois << "/" << d.an <<endl;
	
}
Date creerDate(int j, int m, int a){
	
	Date d ={j, m, a};
	return d;
}
int main(){
	Date dd = {28, 12, 2023};
	afficher(dd);	
	afficher(creerDate(11, 01, 1996));
	
	
	return 0;
}
