#include <iostream>
using namespace std;

int main() {
	int n, data[50], temp,index,i,j,kecil,count=0;
	cout<<"Masukan jumlah data (max:50): ";
	cin>>n;
	for(i=0; i<n; i++) {
		cout<<"Masukan data: ";
		cin>>data[i];
	}
	for(i=0; i<(n-1); i++) {
		kecil = data[i];
		for(j=(i+1); j<n; j++) {
			if(kecil>data[j]) {
				kecil= data[j];
				count++;
				index=j;
			}
		}
		if(count !=0) {
			temp = data[i];
			data[i]=kecil;
			data[index]=temp;
		}
		count = 0;
	}
	for(i=0; i<n; i++) {
		cout<<data[i]<<" ";
	}
}



