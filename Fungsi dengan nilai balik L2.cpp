#include <iostream>
using namespace std;

double Balok(double panjang,double lebar,double tinggi){
	double volume=panjang*lebar*tinggi;
	return volume;
}

int main(){
	double panjang,lebar,tinggi;
	cout<<"Masukan panjang: "; cin>>panjang;
	cout<<"Masukan lebar: "; cin>>lebar;
	cout<<"Masukan tinggi: "; cin>>tinggi;
	
	cout<<"Volume dari Balok adalah "<<Balok(panjang,lebar,tinggi)<<endl;
}
