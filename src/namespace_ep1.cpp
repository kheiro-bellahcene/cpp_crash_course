#include<cstdio>

/*
namespace ns1{
	const  int A = 100;


	void test (){
		printf("J'appartiens au namespace ns1\n");	
		
	}
}

namespace ns2{
	const  int A = 999;


	void test (){
		printf("J'appartiens au namespace ns2\n");	
		
	}
}

int main()
{
	// on peut utiliser sa pour enlever prefixe
	using namespace ns2;
	//printf("%d\n", ns2::A);
	//ns2::test();
	printf("%d\n", A);
	test();
	
	printf("%d\n", ns1::A);
	ns1::test();
	return 0;
}
*/

////////// Deuxième exemple //////////////////

namespace ns1{
	
	void test1(){
		printf("J'appariens au namespace ns1\n");		
	}
	namespace ns2{
		void test2(){	
			printf("J'appartiens au namespace ns2\n");
		}
	}
}

////////// troisième exemple //////////////////
// le même exemple précedent en utilisant la norme C++17
/*
namespace ns1{
	void test1(){
		printf("J'appariens au namespace ns1\n");}}

namespace ns1::ns2{
	void test2(){	
		printf("J'appartiens au namespace ns2\n");}}
*/
int main()
{
	/**
	using namespace ns1;
	test1();
	ns2::test2();
	return 0;
	**/
	// création d'un alias pour ns2
	namespace _2 = ns1::ns2;
	_2::test2();
	
	return 0;
}



