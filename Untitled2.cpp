#include <iostream>
#include <string>
using namespace std;

class NGUOI{
	private:
		string Madd;
		string Hoten;
	public:
		NGUOI();
		void input();
		void output();
};
NGUOI::NGUOI(){
	Madd="";
	Hoten="";
}
void NGUOI::input(){
		
	cout << "Nhap ma dinh danh: ";
	fflush(stdin);
	getline(cin,Madd);
	fflush(stdin);
	cout << "Nhap Ho ten: ";
	getline(cin,Hoten);

}
void NGUOI::output(){
	
	cout << "Ma dinh danh :"<<Madd<<endl;
	fflush(stdin);
	cout << "Ho ten: "<<Hoten;
	fflush(stdin);
}

class NHANVIEN: public NGUOI{
	private:
		int namsinh;
		float hesoluong;
		float tienphucap;	
	public:
		NHANVIEN();
		void nhap();
		void xuat();
		float tinhluong();
		friend bool operator < (NHANVIEN x,NHANVIEN y);
};
NHANVIEN::NHANVIEN():NGUOI(){
	NGUOI();
	namsinh=0;
	hesoluong=0;
	tienphucap = 10000;
}
void NHANVIEN::nhap(){
	NGUOI::input();
	cout<<"Nhap nam sinh: ";
	cin >>namsinh;
	cout<<"Nhap he so luong: ";
	cin>>hesoluong;
}
void NHANVIEN::xuat(){
	NGUOI::output();
	cout<<"\nNam sinh: "<<namsinh<<endl;
	cout<<"He so luong: "<<hesoluong<<endl;
}
float NHANVIEN::tinhluong(){
	return hesoluong*1550 + tienphucap;	
}
bool operator < (NHANVIEN x,NHANVIEN y){
	return x.tinhluong() < y.tinhluong();
}
int main(){
	NGUOI x;
	cout << "NHap thong tin ve nguoi: \n";
	x.input();
	cout<<endl;
	cout << "Thong tin ve nguoi: \n";
	x.output();
	cout<<endl;
	int n;
	cout <<"Nhap so luong nhan vien: ";
	cin>> n;
	NHANVIEN *ds;
	ds= new NHANVIEN[n];
	for (int i=0;i<n;i++){
		cout <<"\nSinh vien thu: "<<i+1<<endl;
		ds[i].nhap();
	}
	for (int i=0;i<n;i++){
		cout <<"Nhan vien thu: "<<i+1<<endl;
		ds[i].xuat();
		cout<< "Tien luong: "<<ds[i].tinhluong();
		cout<<endl<<endl;
	}
	for( int i = 0 ; i < n-1 ; i++ )
		for( int j =  i+1 ; j < n ; j++ )
			if( ds[i]< ds[j]) {
				swap(ds[i],ds[j]);
			}
	for (int i=0;i<n;i++){
		cout <<"Nhan vien thu: "<<i+1<<endl;
		ds[i].xuat();
		cout<< "Tien luong: "<<ds[i].tinhluong();
		cout<<endl<<endl;
	}
}








