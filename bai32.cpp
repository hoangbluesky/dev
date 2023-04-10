#include <iostream>
using namespace std;
class dichvu{
	private:
		int madv;
		string tendv;
		float giacuoc;
	public:
		dichvu();
		void nhap();
		void xuat();
		float laygiacuoc();
};
dichvu::dichvu(){
	madv=giacuoc=0;
	tendv="";
}
void dichvu::nhap(){
	cout<<"Nhap ma dich vu: ";
	cin >> madv;
	cout<<"Nhap ten dich vu: ";
	fflush(stdin);
	getline(cin,tendv);
	cout<<"Nhap gia cuoc: ";
	cin>>giacuoc;
}
void dichvu::xuat(){
	cout<<"Ma dich vu: "<<madv<<endl;
	cout<<"Ten dich vu: "<<tendv<<endl;
	cout<<"Gia cuoc: "<<giacuoc<<endl;;
}
float dichvu::laygiacuoc(){
	return this->giacuoc;
}
class nguoi{
	private:
		string hoten;
		string diachi;
		string sodt;
	public:
		nguoi();
		void nhap();
		void xuat();
};
nguoi::nguoi(){
	
	hoten= diachi= sodt= "";
}
void dichvu::nhap(){
	cout<<"Nhap ho ten: ";
	fflush(stdin);
	getline(cin,hoten);
	cout<<"Nhap dia chi: ";
	fflush(stdin);
	getline(cin,diachi);
	cout<<"Nhap so dien thoai: ";
	fflush(stdin);
	getline(cin,sodt);
}
void dichvu::xuat(){
	cout<<"Ho ten: "<<hoten<<endl;
	cout<<"Dia chi: "<<diachi<<endl;
	cout<<"So dien thoai: "<<sodt<<endl;;
}
int main(){
	dichvu dv;
//	nguoi;
//	dv.nhap();
//	dv.xuat();
	nguoi.nguoi::nhap();
	nguoi.nguoi::xuat();
}















