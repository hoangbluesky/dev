#include<iostream>
#include<string.h>
#include<string>
using namespace std;

class date{
	private:
		int ngay,thang,nam;
	public:
		date(){
			ngay=thang=nam=0;
		}
		void nhap();
		void xuat();
};
void date::nhap(){
	cout <<"Nhap ngay thang va nam: \n";
	cin>>ngay>>thang>>nam;	
}
void date::xuat(){
	cout<<ngay<<"/"<<thang<<"/"<<nam<<endl;
}
class maytinh: public date{
	private:
		int mamay;
		string tenmay;
		float giaban;
	public:
		maytinh();
		void input();
		void output();
		static float kmai;
		float tinhtien();
		void asus();
		void minmoney();
};
float maytinh::kmai=0.5;

maytinh::maytinh(){
	mamay=0;
	tenmay="";
	giaban=0;
}
void maytinh::input(){
	cout<<"Nhap ma may: ";
	cin >>mamay;
	cout<<"Nhap ten may: ";
	fflush(stdin);
	getline(cin,tenmay);
	date::nhap();
	cout<<"Nhap gia ban: ";
	cin >>giaban;
}
void maytinh::output(){
	cout<<"Ma may: "<<mamay<<endl;
	cout<<"ten may: "<<tenmay<<endl;
	cout<<"Ngay san xuat: ";
	date::xuat();
	cout<<"Gia ban: "<<giaban<<endl;
}
float maytinh::tinhtien(){
	return giaban-giaban*kmai;
}
void maytinh::asus(){
	string timten="asus";
	if(tenmay==timten){
		output();
	}
}

int main(){
	date d;
	d.nhap();
	cout<<"Thong tin doi tuong date:\n";
	d.xuat();
	int n;
	cout<<"Nhap so luong may tinh: ";
	cin>>n;
	maytinh *ds;
	ds= new maytinh[n];
	for(int i=0;i<n;i++){
		ds[i].input();
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		ds[i].output();
		cout<<endl;
	}
	cout<<"Cac may tinh ten asus\n";
	for(int i=0;i<n;i++){
		ds[i].asus();
	}

	float min=ds[0].tinhtien();
	for(int i=0;i<n;i++){
		if(ds[i].tinhtien()<=min){
			min=ds[i].tinhtien(); 
		}
	}
	cout<<"\n\ncac may co gia ban thap nhat: ";
	for(int i=0;i<n;i++){
		if(ds[i].tinhtien()==min){
			ds[i].output();
		}
	}
}
