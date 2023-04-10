#include<iostream>
#include <string>
using namespace std;

class sach {
	private:
		int masach;
		string tensach;
	public:
		sach();
		void input();
		void output();
};
sach::sach(){
	masach=0;
	tensach="";
}
void sach::input(){
	cout<<"Nhap ma sach: ";
	cin>> masach;
	cout<<"Nhap ten sach: ";
	fflush(stdin);
	getline(cin,tensach);
}
void sach::output(){
	cout<<"Ma sach: "<<masach<<endl;
	cout<<"Ten sach: "<<tensach<<endl;
}

class muontra: public sach {
	private: 
		int madocgia;
		int soluong;
	public:
		static float phicuoc;
		muontra();
		void nhap();
		void xuat();
		float tinhtiencuoc();
		int getsoluong();
};
muontra::muontra(){
	madocgia=soluong=0;
}
float muontra::phicuoc = 1.55;
void muontra::nhap(){
	sach::input();
	cout<<"Nhap ma doc gia: ";
	cin>>madocgia;
	cout<<"Nhap so luong: ";
	cin>>soluong;
}
void muontra::xuat(){
	sach::output();
	cout<<"Ma doc gia: "<<madocgia<<endl;
	cout<<"So luong: "<<soluong<<endl;
	cout<<endl;
}
int muontra::getsoluong(){
	if(soluong>10){
		xuat();
	}
}
float muontra::tinhtiencuoc(){
	return soluong*phicuoc;
}
int main(){
	sach x;
	x.input();
	cout<<endl;
	x.output();
	int n;
	cout<<"\nNhap so luong sach muon tra: ";
	cin>>n;
	
	muontra *ds= new muontra[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap cuon thu: "<<i+1<<endl;
		ds[i].nhap();
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		cout<<"Cuon thu: "<<i+1<<endl;
		ds[i].xuat();
	}
	cout<<"\nDanh sahc cac doc gia muon >10: \n";
	for(int i=0;i<n;i++){
		ds[i].getsoluong();
		cout<<endl;
	}
	cout<<"\nDanh sahc cac doc gia muon nhieu nhat: \n";
	float max =ds[0].tinhtiencuoc();
	for(int i=0;i<n;i++){
		if(ds[i].tinhtiencuoc()>=max){
			max =ds[i].tinhtiencuoc();
		}
	}
	for(int i=0;i<n;i++){
		if(ds[i].tinhtiencuoc()==max){
			ds[i].xuat();
		}
	}
}
