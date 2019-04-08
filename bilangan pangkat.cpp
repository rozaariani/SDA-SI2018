#include <iostream>
using namespace std;

float bilangan (float angka,int pangkat ) {
	
	float hasil;
	hasil = 1;
	for (int i=1 ; i<=pangkat ; i++){
		hasil = hasil*angka;
	}
return hasil;
}


int main(){
	
	int angka, pangkat;
	cout << "Angka   : "; cin>> angka;
	cout << "Pangkat : "; cin>> pangkat;
	
	cout << endl;
	
	cout << angka << " pangkat " << pangkat << " adalah : " <<  bilangan (angka,pangkat);
	
}
