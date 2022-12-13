#include <iostream>
using namespace std;

int main() {
	const int baris =3;
	const int kolom =4;
	int angka[baris][kolom];
	cout<<"Input Matrik : "<<endl;
	for(int i=0; i<baris; i++)
		for(int j=0; j<kolom; j++) {

			cout<<"Matrik ["<<i<<","<<j<<"] : ";
			cin>>angka[i][j];

		}
	cout<<"Matriks 3x4 : "<<endl;
	for(int i=0; i<baris; i++) {
		for(int j=0; j<kolom; j++) {
			cout<< angka[i][j]<<" ";
		}
		cout<<" "<<endl;
	}
	cout<<endl;
}

