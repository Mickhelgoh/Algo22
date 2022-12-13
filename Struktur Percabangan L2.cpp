#include <iostream>
using namespace std;
int main(){
	int jk, li, total;
	char sr; string nama;
		
	cout<<"Hotel Bahagia"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"1. VVIP (1.000.000)"<<endl;
	cout<<"2. VIP (750.000)"<<endl;
	cout<<"3. Standard (500.000)"<<endl;
	cout<<"4. Melati (250.000)"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Masukan nama anda: "; cin>>nama;
	cout<<"Masukan jenis kamar (1-4): "; cin>>jk;
	cout<<"Lama inap: "; cin>>li;
	cout<<"Dengan sarapan (y/n) 50rb/hr: "; cin>>sr;
	
	switch (jk){
		case 1: cout<<"Terima kasih "<<nama<<endl; cout<<"Kamar anda VVIP"<<endl; cout<<"lama menginap "<<li<<" malam ";
		if(sr=='y'||'Y'){
			cout<<"dengan sarapan"<<endl;
		}else{
			cout<<"tidak dengan sarapan"<<endl;
		} total = (1000000*li)+(50000*li); cout<<"Total yang harus dibayarkan: "<<total<<endl;break;
		case 2: cout<<"Terima kasih "<<nama<<endl; cout<<"Kamar anda VIP"<<endl; cout<<"lama menginap "<<li<<" malam ";
		if(sr=='y'||'Y'){
			cout<<"dengan sarapan"<<endl;
		}else{
			cout<<"tidak dengan sarapan"<<endl;
		} total = (750000*li)+(50000*li); cout<<"Total yang harus dibayarkan: "<<total<<endl;break;
		case 3: cout<<"Terima kasih "<<nama<<endl; cout<<"Kamar anda Standart"<<endl; cout<<"lama menginap "<<li<<" malam ";
		if(sr=='y'||'Y'){
			cout<<"dengan sarapan"<<endl;
		}else{
			cout<<"tidak dengan sarapan"<<endl;
		} total =(500000*li)+(50000*li); cout<<"Total yang harus dibayarkan: "<<total<<endl;break;
		case 4: cout<<"Terima kasih "<<nama<<endl; cout<<"Kamar anda Melati"<<endl; cout<<"lama menginap "<<li<<" malam ";
		if(sr=='y'||'Y'){
			cout<<"dengan sarapan"<<endl;
		}else{
			cout<<"tidak dengan sarapan"<<endl;break;
		} total = (250000*li)+(50000*li); cout<<"Total yang harus dibayarkan: "<<total<<endl;
		default: cout<<"Sedang tahap perkembangan silakan pilih 1-4"<<endl;break;
	}
	
	return 0;
	}
