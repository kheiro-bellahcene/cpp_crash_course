#include<iostream>
using namespace std; 


int pow2(int x){
	
	return x * x;
}

int main(){
	
	int &&m = pow2(5);
	cout << m;
	return 0;
}
