#include <iostream>
using namespace std;

struct mahasiswa{
	string nim,nama,prodi;
	float ipk;
};

int main(){
	mahasiswa mhs[5];
	int jum;
	
	cout<<"aplikasi data mahasiswa"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Data mahasiswa yang ingin dimasukkan (max 5): ";
	cin>>jum;
	for(int i=0; i<jum; i++){
		cout<<"Data mahasiswa ke-"<<i+1<<endl;
		cout<<"Masukan Nama: "; cin>>mhs[i].nama;
		cout<<"Masukan NIM: "; cin>>mhs[i].nim;
		cout<<"Masukan Program Studi: ";cin>>mhs[i].prodi;
		cout<<"Masukan IPK: "; cin>>mhs[i].ipk;
	}
	system ("CLS");
	
	cout<<"Data yang telah dimasukkan"<<endl;
	cout<<"---------------------------"<<endl;
	
	for(int i=0; i<jum; i++){
		cout<<"Data mahasiswa ke-"<<i+1<<endl;
		cout<<"Masukan Nama: "<<mhs[i].nama<<endl;
		cout<<"Masukan NIM: "<<mhs[i].nim<<endl;
		cout<<"Masukan Program Studi: "<<mhs[i].prodi<<endl;
		cout<<"Masukan IPK: "<<mhs[i].ipk<<endl;
	}
}
