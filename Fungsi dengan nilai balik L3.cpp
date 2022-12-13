#include <iostream>
using namespace std;

string bonus(int harga) {
	string s;
	if (harga<=100000) {
		s="permen";
	} else if(harga>100000 & harga<=150000) {
		s="es krim";
	} else if(harga>150000 & harga<=200000) {
		s="kfc";
	} else if(harga>200000 & harga<=250000) {
		s="hoodie";
	} else if(harga>250000) {
		s="iphone";
	}
	return s;
}

int main () {
	string barang;
	int harga;
	int n;
	cout<<"Masukan total daftar belanja anda: "; cin>>n;
	cout<<"Selamat anda mendapatkan "<<bonus(n);
	
	
}
