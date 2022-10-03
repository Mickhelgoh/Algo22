#include <iostream>
using namespace std;
int main() {
	string pesan = "Selamat belajar di belajarcpp.com", kalimat ="";
	cout<<pesan<<endl;
	getline(cin,kalimat); //fungsi input agar dapat membaca kalimat panjang dengan spasi
	cout<<kalimat<<endl;
	return 0;
}
