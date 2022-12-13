#include <iostream>
using namespace std;

float Wanita(float tinggi){
	float BBIW= (tinggi-100)-(tinggi-100)*0.15 ;
	return BBIW;
}

float Pria(float tinggi){
	float BBIP=(tinggi-100)-(tinggi-100)*0.1;
	return BBIP;
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
		cout<<"Berat bada ideal anda adalah "<<Pria(tinggi)<<endl;
	}else{
		cout<<"Berat bada ideal anda adalah "<<Wanita(tinggi);
	}
}
