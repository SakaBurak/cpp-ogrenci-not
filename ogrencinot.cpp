//100-90 A     89-80 B      79-70 C         69-60 D         -60 F 
#include<iostream>

using namespace std;

int main(){
	int sayi;
	int Not;
	int toplam=0;
	cout<<"Ogrencinin kac notu var:";
	cin>>sayi;
	cout<<"Lutfen ogrencinin notlarini giriniz(0-100):"<<endl;
	for(int i=1;i<=sayi;i++){
		cout<<i<<".Notu:";
		cin>>Not;
		toplam += Not;
	}
	double ortalama=toplam/sayi;
	if(ortalama>=90 && ortalama<=100){
		cout<<"Ogrencinin Ortalamasi:"<<ortalama<<endl;
		cout<<"Ogrencinin Harf Notu:A"<<endl;
	}
	else if(ortalama>=80 && ortalama<=89){
		cout<<"Ogrencinin Ortalamasi:"<<ortalama<<endl;
		cout<<"Ogrencinin Harf Notu:B"<<endl;
	}
	else if(ortalama>=70 && ortalama<=79){
		cout<<"Ogrencinin Ortalamasi:"<<ortalama<<endl;
		cout<<"Ogrencinin Harf Notu:C"<<endl;
	}
	else if(ortalama>=60 && ortalama<=69){
		cout<<"Ogrencinin Ortalamasi:"<<ortalama<<endl;
		cout<<"Ogrencinin Harf Notu:D"<<endl;
	}
	else if(ortalama<60 && ortalama>=0){
		cout<<"Ogrencinin Ortalamasi:"<<ortalama<<endl;
		cout<<"Ogrencinin Harf Notu:F"<<endl;
	}
	else{
		cout<<"HATA ORTALAMA 0-100 ARASINDA OLMALIDIR!";
	}
	return 0;
}
