#include <iostream>
using namespace std;

char huruf (int nilai){
	char hasil;
	if (nilai==100){
		hasil = 'A';
	} else if (nilai < 100){
		hasil = 'B';
	} else if (nilai > 100){
		hasil = 'C';
	}
	return hasil;
}

int main(){
	int angka;
	cout<<"Masukkan Angka: ";cin>>angka;
	cout<<"Hurufnya: "<<huruf(angka);
}
