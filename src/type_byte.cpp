#include<iostream>
#include<cstddef>
using namespace std;



int main(){
	byte X{0b101};
	cout << to_integer<int>(X) <<endl;
	
	
	return 0;
}
