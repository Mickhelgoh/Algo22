#include <iostream>
using namespace std;

void Balok(double panjang,double lebar,double tinggi){
	double volume=panjang*lebar*tinggi;
	cout<<"Volume Balok adalah: "<<volume<<" cm"<<endl;
}

int main(){
	double panjang,lebar,tinggi;
	cout<<"Masukan panjang: "; cin>>panjang;
	cout<<"Masukan lebar: "; cin>>lebar;
	cout<<"Masukan tinggi: "; cin>>tinggi;
	Balok(panjang,lebar,tinggi);
	return 0;
}
