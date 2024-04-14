#include<iostream>
using namespace std;


int main(){
	
	int a = 10, b = 999;
	int &r = a;
		
	
	cout << "A =" << a << endl;
	cout << "&r =" << r << endl;
	r++;
	cout << "A =" << a << endl;
	r = b;
	cout << "A =" << a << endl;

	
	
	return 0;
}
