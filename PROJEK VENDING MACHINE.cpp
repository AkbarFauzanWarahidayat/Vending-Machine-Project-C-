#include<iostream>
using namespace std;
int main()
{
	
	int pilrasa,pedas,tidak,pil,uang,pizza,burger,kerupuk,nasi_goreng,roti;
	cout<<"MASUKAN UANG ANDA : ";
	cin>>uang;
	cout<<"UANG YANG ANDA MASUKAN SENILAI Rp."<<uang<<endl;
	cout<<"================================================="<<endl;
	cout<<"PILIH MENU MAKANAN/MINUMAN SESUKA ANDA..."<<endl;
	cout<<"================================================="<<endl;	
	cout<<"PIZZA 	(1)	10.000"<<endl;
	cout<<"BURGER 	(2)	5000"<<endl;
	cout<<"KERUPUK (3)	1000"<<endl;
	cout<<"NASI GORENG (4)	25.000"<<endl;
	cout<<"ROTI (5)	3000"<<endl;
	cout<<"================================================="<<endl;	
	cout<<"PILIH MENU YANG INGIN ANDA BELI : ";
	cin>>pil;
	cout<<"ANDA MEMILIH :"<<pil<<endl;
	cout<<"================================================="<<endl;	


if(pil==1)
		if (uang >=10000){
			cout<<"ANDA MEMBELI PIZZA, SILAHKAN AMBIL..."<<endl;
			pizza=uang-10000;
			cout<<"KEMBALIAN ANDA SENILAI Rp."<<pizza<<endl;
			cout<<"TERIMA KASIH"<<endl;
		}
		else{
			cout<<"MAAF UANG ANDA KURANG"<<endl;
			cout<<"UANG YANG ANDA MASUKAN SENILAI : "<<uang;
		}

if(pil==2)
		if (uang>=5000){
			cout<<"ANDA MEMBELI BURGER, SILAHKAN AMBIL..."<<endl;
			burger=uang-5000;
			cout<<"KEMBALIAN ANDA SENILAI Rp."<<burger<<endl;
			cout<<"TERIMA KASIH"<<endl;
		}
		else{
			cout<<"MAAF UANG ANDA KURANG"<<endl;
			cout<<"UANG YANG ANDA MASUKAN SENILAI : "<<uang;
		}
		
if(pil==3)
		if (uang>=1000){
			cout<<"ANDA MEMBELI KERUPUK, SILAHKAN AMBIL..."<<endl;
			kerupuk=uang-1000;
			cout<<"KEMBALIAN ANDA SENILAI Rp."<<kerupuk<<endl;
			cout<<"TERIMA KASIH "<<endl;
		}
		else{
			cout<<"MAAF UANG ANDA KURANG"<<endl;
			cout<<"UANG YANG ANDA MASUKAN SENILAI : "<<uang;
		}

if(pil==4)
		if (uang>=25000){
			cout<<"ANDA MEMBELI NASI GORENG, SILAHKAN AMBIL..."<<endl;
			nasi_goreng=uang-25000;
			cout<<"KEMBALIAN ANDA SENILAI Rp."<<nasi_goreng<<endl;
			cout<<"TERIMA KASIH"<<endl;
		}
		else{
			cout<<"MAAF UANG ANDA KURANG"<<endl;
			cout<<"UANG YANG ANDA MASUKAN SENILAI : "<<uang;
		}
if(pil==5)
		if (uang>=3000){
			cout<<"ANDA MEMBELI ROTI, SILAHKAN AMBIL..."<<endl;
			roti=uang-3000;
			cout<<"KEMBALIAN ANDA SENILAI Rp."<<roti<<endl;
			cout<<"TERIMA KASIH"<<endl;
		}
		else{
			cout<<"MAAF UANG YANG ANDA KURANG"<<endl;
			cout<<"UANG YANG ANDA MASUKAN SENILAI"<<endl;
		}

}
		
		
	
	
	

