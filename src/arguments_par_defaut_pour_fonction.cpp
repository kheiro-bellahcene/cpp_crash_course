#include<iostream>
#include <iomanip>
using namespace std;

typedef struct {
	int an;
	int mois;
	int jour;
}Date;
Date creerDate(int a, int m = 1, int j = 1);
/*
Date creerDate(int a, int m, int j){
	
	Date d = {a, m, j};
	return d;
}

Date creerDate(int a, int m){
	Date d = {a, m, 1};
	return d;
}

Date creerDate (int a){
	Date d =  {a, 1, 1};
	return d;
}


void afficher(Date &d){
	cout << setfill('0') << setw(2) << d.jour <<"/";
	cout << setw(2) << d.mois << "/"<<d.an << endl;
}
*/

// ce code est equivalent au code précedent 


void afficher(Date &d){
	cout << setfill('0') << setw(2) << d.jour <<"/";
	cout << setw(2) << d.mois << "/"<<d.an << endl;
}
int main(){
	
	
	Date d = creerDate(2020, 12, 5);
	afficher(d);
	Date dd = creerDate(2020, 9);
	afficher(dd);
	
	Date ddd = creerDate(2021);
	afficher(ddd);
	return 0;
}

Date creerDate(int a, int m, int j){
	
	Date d = {a, m, j};
	return d;
}
