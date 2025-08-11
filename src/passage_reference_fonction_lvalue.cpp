#include<iostream>
using namespace std;
// passage par adresse
void permuter1(int *A, int *B){
	
	int C = *A;
	*A = *B;
	*B = C;
}
// passage par reference

void permuter2(int &A, int &B){
	
	int C = A;
	A = B;
	B = C;	
}


int main(){
	
	int X = 9, Y = 1111;
	cout << "X = " << X <<"-- Y =" << Y <<endl;
	
	//permuter1(&X, &Y);
	permuter2(X, Y);
	cout << "X = " << X <<"-- Y =" << Y <<endl;
	
	return 0;
}
