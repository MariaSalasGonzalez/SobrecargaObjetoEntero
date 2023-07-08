#include <iostream>
using namespace std; 

//Realizar la sobrecarga del tipo de dato, int
//o sea el tipo de dato para los enteros;
//x= 4 + 5 - c + 7 * w;

//Lo transformo en letra, por ejemplo sobrecargo string 
//para obtener BCR


class TEntero {

private:
	int n;

public:
	TEntero(int = 0); //Constructor conjunto
	operator int() const; //Sobrecarga del int.
};


//---DEFINICION DE LOS METODOS---
TEntero::TEntero(int x): n(x) {
}

TEntero::operator int() const {
	return n;
}

//---MAIN---
int main() {
	cout << "--Trabajando con Sobrecarga del Int--" << endl;
	cout << "-------------------------------------" << endl;
	int a = 10, b = 2; //aca van solo int
	TEntero c;
	TEntero d = 5;
	cout << "El resultado de a + c - d * b es :"
	<< a + c - d * b << endl;

	system("pause");
	return 0;
}