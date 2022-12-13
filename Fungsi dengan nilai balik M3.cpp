#include <iostream>
using namespace std;

string status(int nilai){
	string s;
	if(nilai<=50){
		s="gagal";
	}else {
		s="lulus";
	}
	return s;
}

int main(){
	cout<<status(60);
}
