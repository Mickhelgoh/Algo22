#include <iostream>
using namespace std;

void garis (){
	cout<<"----------------"<<endl;
}

void namaku (string nama, int umur){
	cout<<"nama saya "<<nama<<endl;
	cout<<"umur saya "<<umur<<endl;
}

int main(){
	string kata;
	int umur=20;
	kata="uvers keren";
	
	
	garis(); namaku(kata,umur); garis();
}
