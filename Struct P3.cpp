#include <iostream>
using namespace std;
struct Kendaraan{
	string jeniskendaraan;
	int TahunProduksi;
	float harga;
};
int main(){
	Kendaraan data1, data2;
	data1.jeniskendaraan="Sedan";
	data2.jeniskendaraan="Minibuus";
	
	data1.TahunProduksi=2007;
	data1.harga=97.500000;
	
	data2.TahunProduksi=2012;
	data2.harga=120.500000;
	
	cout<<"Data 1: "<<endl;
	cout<<"Jenis kendaraan: "<<data1.jeniskendaraan<<endl;
	cout<<"Tahun produksi: "<<data1.TahunProduksi<<endl;
	cout<<"Harga Kendaraan: "<<data1.harga<<endl;
	
	cout<<"Data 2: "<<endl;
	cout<<"Jenis kendaraan: "<<data2.jeniskendaraan<<endl;
	cout<<"Tahun produksi: "<<data2.TahunProduksi<<endl;
	cout<<"Harga Kendaraan: "<<data2.harga<<endl;
	
	return 0;
}
