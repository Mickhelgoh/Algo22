#include <iostream>
using namespace std;

int main(){
	int n,i,j, data[50], temp;
	cout<<"Masukan jumlah data (max:50): "; cin>>n;
	for(i=0; i<n; i++){	
		cout<<"Masukan data: "; cin>>data[i];
}
	for(i=0; i<(n-1); i++){
		for(j=0; j<(n-i-1); j++){
		if(data[j]>data[j+1]){
			temp=data[j];
			data[j]=data[j+1];
			data[j+1]=temp;
		}
	}
}
	cout<<"Data yang telah diurutka dengan metode bubble sort"<<endl;
	cout<<endl<<endl;
	for(i=0; i<n; i++){
		cout<<data[i]<<" ";
	}
}
