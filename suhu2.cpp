#include <iostream>
using namespace std;
int main(){
	int pil, suhu;
	char u;
	float fahren,celcius;
	Ulang :
	cout<<"Pilihlah nomor 1-2 "<<endl;
	cout<<"1. Celcius ke Fahrenheit "<<endl;
	cout<<"2. Fahrenheit ke Celcius "<<endl;
	cout<<"Pilihan anda adalah : "; cin>>pil;
	cout<<"Masukan Suhu : "; cin>>suhu;
	switch (pil){
		case 1: fahren= (suhu* 9/5) + 32; cout<<"Celsius ke Fahrenheit adalah "<<fahren<<endl; break;
		case 2: celcius= (suhu-32)*5/9; cout<<"Fahrenheit ke Celsius adalah "<<celcius<<endl; break;
	} cout<<"Apakah ingin ulang (y/t): "; cin>>u;
	if(u== 'y'||'Y')
	goto Ulang;
}
