#include <iostream>
using namespace std;
int main(){
	int NK;
	string nama;
	cout<<"Masukan Nama Anda: "; cin>>nama;
	cout<<"Masukan Nilai kegantengan 1-100: "; cin>>NK;
	switch (NK){
	case 0 ... 1 : cout<<"Alien"<<endl; break;
	case 2 ... 85 : cout<<"Perlu Oplas"<<endl; break;
	case 86 ... 99 : cout<<"Anda Ganteng"<<endl; break;
	case 100 ... 99999999999999999 : cout<<"Bukan manusia"<<endl; break;
	default : cout<<" pikirin aja sendiri goblok "; break;
	}
}
