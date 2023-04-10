#include <iostream>
#include <string>
using namespace std;

class date {
	private:
		int ngay,thang,nam;
	public:
		date();
		void nhap();
		void xuat();
};
date::date(){
	ngay=thang=nam=0;
}
void date::nhap(){
	cout<<"Nhap ngay: ";
	cin>>ngay;
	cout<<"Nhap thang: ";
	cin>>thang;
	cout<<"Nhap nam: ";
	cin>>nam;
}
void date::xuat(){
	cout<<"Date: "<<ngay<<"/"<<thang<<"/"<<nam;
}
class muontra:public date{
	private:
		int madocgia;
		int masach;
		int soluong;
	public:
		static float phicuoc;
		muontra();
		void input();
		void output();
		float tinhtiencuoc();
		friend bool operator < (muontra x,muontra y);
};
muontra::muontra(){
	madocgia=masach=soluong=0;
}
float muontra::phicuoc =10;
void muontra::input(){
	cout<<"Nhap ma doc gia: ";
	cin>>madocgia;
	cout<<"Nhap ma sach: ";
	cin>>masach;
	date::nhap();
	cout<<"Nhap so luong: ";
	cin>>soluong;
}
void muontra::output(){
	cout<<"Ma doc gia: "<<madocgia<<endl;
	cout<<"Ma sach: "<<masach<<endl;
	date::xuat();
	cout<<"\nSo luong: "<<soluong<<endl;
	cout<<"So tien cuoc: "<<tinhtiencuoc();
}
float muontra::tinhtiencuoc(){
	return soluong *phicuoc;
}
bool operator < (muontra x,muontra y){
	return x.soluong < y.soluong;
}
int main(){
	date a;
	a.nhap();
	cout<<"\nThong tin doi tuong date: \n";	
	a.xuat();
	
	int n;
	cout<<"\nNhap n doi tuong muon tra: ";
	cin>>n;
	
	muontra *ds=new muontra[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap cuon sach thu: "<<i+1<<endl;
		ds[i].input();
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		cout<<"Cuon sach thu: "<<i+1<<endl;
		ds[i].output();
		cout<<endl<<endl;
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i] < ds[j]){
				swap(ds[i],ds[j]);
			}
		}
	}
	cout<<"\nSap xep: \n";
	for(int i=0;i<n;i++){
		cout<<"Cuon sach thu: "<<i+1<<endl;
		ds[i].output();
		cout<<endl<<endl;
	}
}
