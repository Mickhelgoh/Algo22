#include <iostream>
using namespace std;

void Wanita(float tinggi){
	float BBIW= (tinggi-100)-(tinggi-100)*0.15 ;
	cout<<"Berat Badan ideal anda adalah: "<<BBIW<<" Kg"<<endl;
}

void Pria(float tinggi){
	float BBIP=(tinggi-100)-(tinggi-100)*0.1;
	cout<<"Berat Badan ideal anda adalah: "<<BBIP<<" Kg"<<endl;
}

int main(){
	float tinggi;
	int jk;
	cout<<"1. Pria"<<endl;
	cout<<"2. Wanita"<<endl;
	cout<<"Pilih Jenis Kelamin Anda (1/2): "; cin>>jk;
;
	cout<<"Masukan tinggi: "; cin>>tinggi;
	
	if (jk=1){
		Pria(tinggi);
	}else{
		Wanita(tinggi);
	}
	
	return 0;
}
