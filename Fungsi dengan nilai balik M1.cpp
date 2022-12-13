#include <iostream>
using namespace std;

int tambah (int bil, int bil2){
	return bil+bil2;
}
int main(){
	int a,b,c;
	cout<<"Masukan angka a: "; cin>>a;
	cout<<"Masukan angka b: "; cin>>b;
	cout<<"Hasilnya: "<<tambah(a,b)<<endl;
	c= tambah(a,b) + 5;
	cout<<"Hasil tersebut ditambah 5: "<<c<<endl;
}
