#include<iostream>
using namespace std;


int main(){
	float *q = new float [5];
	
	for(int i = 0; i  < 5; i++){
		q[i] = i* 1.1;
	}
	for (int i =0; i < 5; i++){
		cout << q[i] << "\t";
	}cout << "\n";
	
	delete[] q;
	
	for (int i =0; i < 5; i++){
		cout << q[i] << "\t";
	}cout << "\n";
	return 0;
}
