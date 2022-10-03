#include <iostream>
using namespace std;

int main(){
	char jawab;
	int ak,ap,penjumlahan;
	
	do{
		cout<<"Masukan Angka Pertama: "; cin>>ap;
		cout<<"Masukan Angka Kedua: "; cin>>ak;
		penjumlahan = ap+ak;
		cout<<"Penjumlahan dari "<<ap<<" + "<<ak<<" : "<<penjumlahan;
		cout<<endl<<"Coba lagi (Y/T) ? "; cin >> jawab;
	}
	while (jawab=='y' || jawab=='Y');
	return 0;

