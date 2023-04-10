#include <iostream>
#include <string>
using namespace std;

class nguoi{
	private:
		string hoten;
		string gioitinh;
		int namsinh;
	public:
		nguoi();
		~nguoi();
		void nhap();
		void xuat();
		int tinhtuoi();
};
nguoi::nguoi(){
	hoten="";
	gioitinh="";
	namsinh=0;
}
nguoi::~nguoi(){
	
}
void nguoi::nhap(){
	cout<<"Nhap ho ten: ";
	fflush(stdin);
	getline(cin,hoten);
	cout<<"Nhap gioi tinh: ";
	fflush(stdin);
	getline(cin,gioitinh);
	cout<<"Nhap nam sinh: ";
	cin>>namsinh;
}
void nguoi::xuat(){
	cout<<"Ho ten: "<<hoten<<endl;
	cout<<"Gioi tinh: "<<gioitinh<<endl;
	cout<<"Nam sinh: "<<namsinh<<endl;
}
int nguoi::tinhtuoi(){
	return 2020-namsinh;
}
class nhanvien: public nguoi{
	private:
		float hsthamnien;
		float mucluong;
		float anca;
	public:
		nhanvien();
		~nhanvien();
		void input();
		void output();
		int nghihuu();
		float luong();
		void nhanviennghihuu();
};
nhanvien::nhanvien(){
	hsthamnien=mucluong=anca=0;
}
nhanvien::~nhanvien(){
	
}
void nhanvien::input(){
	nguoi::nhap();
	cout<<"Nhap he so tham nien: ";
	cin>>hsthamnien;
	cout<<"Nhap tien luong: ";
	cin>>mucluong;
	cout<<"Nhap tien an: ";
	cin>>anca;
}
void nhanvien::output(){
	nguoi::xuat();
	cout<<"He so tham nien: "<<hsthamnien<<endl;
	cout<<"Tien luong: "<<mucluong<<endl;
	cout<<"tien an: "<<anca<<endl;
}
int nhanvien::nghihuu(){
	if(tinhtuoi()>=60)
		return 1;
	return 0;
}

float nhanvien::luong(){
	if(nghihuu()==1){
		return 0.75*mucluong*hsthamnien;
	}else return mucluong*hsthamnien + anca;
}
void nhanvien::nhanviennghihuu(){
	if(nghihuu()==1){
		output();
	}
}
int main(){
	nguoi x;
	x.nhap();
	x.xuat();
	cout<<"Tuoi: "<< x.tinhtuoi()<<endl;
	
	int n;
	cout<<"Nhap so luong nhan vien: ";
	cin>>n;
	nhanvien *nv= new nhanvien[n];
	for(int i=0;i<n;i++){
		nv[i].input();
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		nv[i].output();
		cout<<"Tuoi: "<< nv[i].tinhtuoi()<<endl;
		cout<<"Luong: "<<nv[i].luong()<<endl;
		cout<<endl;
	}
	cout<<"\nthong tin nhan vien nghi huu\n";
	for (int i=0;i<n;i++){		
		nv[i].nhanviennghihuu();
		cout<<endl;
	}
}















