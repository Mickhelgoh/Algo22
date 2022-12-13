#include <iostream>
using namespace std;
struct mahasiswa{
	char nim[10];
	char nama[35];
	char mataKuliah[35];
	float nilaiAngka;
};
int main(){
	mahasiswa mhs[3];
	int i;
	for (i=0; i<3; i++){
		cout<<"NIM: ";
		cin>>mhs[i].nim;
		cout<<"Nama: ";
		cin>>mhs[i].nama;
		cout<<"Mata Kuliah: ";
		cin>>mhs[i].mataKuliah;
		cout<<"Nilai Angka: ";
		cin>>mhs[i].nilaiAngka;
		cout<<endl;
	}
	for(i=0;i<3;i++){
		cout<<"NIM: "<<mhs[i].nim<<endl;
		cout<<"Nama: "<<mhs[i].nama<<endl;
		cout<<"Mata Kuliah: "<<mhs[i].mataKuliah<<endl;
		cout<<"Nilai Angka: "<<mhs[i].nilaiAngka<<endl;
	}
}
