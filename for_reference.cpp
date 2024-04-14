#include<iostream>
using namespace std;


int main(){
	
	int T[] = {10, 20, 30, 401, 5};
	
	for (int i = 0; i < 5; i++){
		cout << T[i] <<"\t";
	} cout << "\n";
	
	for (int c : T){
		cout << c << "\t";
	}cout << endl;
	
	for (int &c : T){
		c *= 2;}
		
	for (int c : T){
		cout << c << "\t";
	}cout << endl;
	return 0;
}
