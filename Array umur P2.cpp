#include <iostream>
using namespace std;

int main(){
	int umur[2000], total=0, rerata,tanya;
	cout<<"Ingin memasukan berapa data: ";
	cin>>tanya;
	for (int a=0; a<tanya; a++){
	
	cout<<"Masukan umur: ";
	cin>>umur[a];
	total= total + umur[a];
}
	rerata = total/tanya;
	cout<<"Rata-rata umur: "<<rerata;
}
