#include <iostream>

/* Ejercicio de Suma de numeros Pares entre 1 y 100 Version 2 */

using namespace std;
int main(int argc, char** argv) {
	cout<<"Ejercicio de SUma de numeros pares entre 1 y 100"<<endl<<"Version 2"<<endl<<endl;
	
	int par = 0;
	
	for(int i = 2; i <= 100; i+=2)
		par +=i;

	cout<<endl<<"La suma de todos los pares: "<<par<<endl;
	
	system("PAUSE");
	return 0;
}