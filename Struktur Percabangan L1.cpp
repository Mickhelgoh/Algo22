#include <iostream>
using namespace std;

int main(){
	
	int tugas,uts,uas,nilai;
	string nama;
	cout<<"Masukan nama anda: "; cin>>nama;
	cout<<"Nilai tugas: "; cin>>tugas;
	cout<<"Nilai UTS:: "; cin>>uts;
	cout<<"Nilai UAS: "; cin>>uas;
	cout<<"------------------------"<<endl;
	nilai=(tugas+uts+uas)/3;
	switch(nilai){
		case 0 ... 20: cout<<"Selamat "<<nama<<endl; cout<<"Nilai anda (tugas+uts+uas)/3: "<<nilai<<endl; cout<<"Nilai Huruf : E"<<endl;
		cout<<"Predikat: Sangat Buruk"<<endl; break;
		case 21 ... 40: cout<<"Selamat "<<nama<<endl; cout<<"Nilai anda (tugas+uts+uas)/3: "<<nilai<<endl; cout<<"Nilai Huruf : D"<<endl;
		cout<<"Predikat: Buruk"<<endl; break;
		case 41 ... 60: cout<<"Selamat "<<nama<<endl; cout<<"Nilai anda (tugas+uts+uas)/3: "<<nilai<<endl; cout<<"Nilai Huruf : C"<<endl;
		cout<<"Predikat: Cukup Baik"<<endl; break;
		case 61 ... 80: cout<<"Selamat "<<nama<<endl; cout<<"Nilai anda (tugas+uts+uas)/3: "<<nilai<<endl; cout<<"Nilai Huruf : B"<<endl;
		cout<<"Predikat: Baik"<<endl; break;
		case 81 ... 100: cout<<"Selamat "<<nama<<endl; cout<<"Nilai anda (tugas+uts+uas)/3: "<<nilai<<endl; cout<<"Nilai Huruf : A"<<endl;
		cout<<"Predikat: Sangat Baik"<<endl; break;
		default : cout<<"Error nilai tidak mungkin lebih dari 100"<<endl;
	}
	return 0;
}
