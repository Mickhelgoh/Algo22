#include <iostream>
using namespace std;

string bonus(int nilai){
	string s;
	if(nilai<50){
		s="es krim";
	}
	else if(nilai>50){
		s="kfc";
	}else if(nilai=50){
		s="permen";
	}
	return s;
}

int main (){
	int a;

	cout<<"Masukan nilai anda: "; cin>>a;
	
	cout<<"Selamat nilai anda "<<a<<" dan anda mendapatkan "<<bonus(a);
}
