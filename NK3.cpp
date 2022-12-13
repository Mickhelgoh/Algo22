#include <iostream>
using namespace std;

int main(){
	int NK;
	string nama;
	cout<<"Masukan Nama Anda: "; cin>>nama;
	cout<<"Masukan Nilai kegantengan 1-100: "; cin>>NK;
		
	if (NK>=100){
		cout<<"bukan manusia"<<endl;
	}else if (NK>85){
	cout<<"anda ganteng";
	}else if (NK<=1){ cout<<"Alien";
	
	}else{
		cout<<"perlu oplas";
	}
	
	return 0;
}		
