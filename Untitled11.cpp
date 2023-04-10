#include<iostream>
#include<string>

using namespace std;

class MonHoc
{
	private:
		int MaMH;
		string TenMH;
		float DTB;
		int SoTC;
	public:
		MonHoc();
		void nhap();
		void xuat();
		float diemtk();
//		friend istream& operator>>(istream& is,MonHoc& p);
//		friend ostream& operator<<(ostream& os,MonHoc& p);
};
MonHoc::MonHoc()
{
	MaMH=1;
	TenMH="";
	DTB=0;
	SoTC=0;
}
void MonHoc::nhap()
{
	cout<< "nhap ma mon hoc: ";
	cin>>MaMH;
	cout<< "nhap ten mon hoc: ";
	fflush(stdin);
	getline(cin,TenMH);
	cout<< "nhap diem trung binh: ";
	cin>>DTB;
	cout<< "nhap so tin chi: ";
	cin>>SoTC;
}
void MonHoc::xuat()
{
	cout<< "ma mon hoc: "<< MaMH <<endl;
	cout<< "ten mon hoc: "<<TenMH <<endl;
	cout<< "diem trung binh: "<<DTB <<endl;
	cout<< "so tin chi: "<<SoTC <<endl;
}
//float MonHoc::diemtk(){
//	return (DTB*SoTC)/
//}
class sinhvien:public MonHoc{
	private:
		int MaSV;
		string TenSV;
		int SoMH;
	public:
		sinhvien();
		~sinhvien();
		void input();
		void output();
};
sinhvien::sinhvien(){
	MaSV=SoMH=0;
	TenSV="";
}
sinhvien::~sinhvien(){
	
}
void sinhvien::input(){
	cout<<"Nhap ma sinh vien: ";
	cin>>MaSV;
	cout<<"Nhap ten sinh vien: ";
	fflush(stdin);
	getline(cin,TenSV);
	cout<<"Nhap so mon hoc: ";
	cin>>SoMH;
	MonHoc::nhap();
}
void sinhvien::output(){
	cout<<"Ma sinh vien: "<<MaSV<<endl;
	cout<<"Ten sinh vien: "<<TenSV<<endl;
	cout<<"So mon hoc: "<<SoMH<<endl;
	MonHoc::xuat();
}
//istream& operator>>(istream &is,MonHoc& p)
//{
//	cout<< "nhap ma mon hoc: ";
//	is>>p.MaMH;
//	cout<< "nhap ten mon hoc: ";
//	fflush(stdin);
//	getline(is,p.TenMH);
//	cout<< "nhap diem trung binh: ";
//	is>>p.DTB;
//	cout<< "nhap so tin chi: ";
//	is>>p.SoTC;
//	cout << endl;
//	return is;
//	
//}
//ostream& operator<<(ostream &os,MonHoc& p)
//{
//	os<< "ma mon hoc: "<< p.MaMH <<endl;
//	os<< "ten mon hoc: "<<p.TenMH <<endl;
//	os<< "diem trung binh: "<<p.DTB <<endl;
//	os<< "so tin chi: "<<p.SoTC <<endl;
//	cout << endl;
//	return os;
//}
int main()
{
//	cau 1 vs cau 2
	MonHoc p;
	p.nhap();
	cout<<endl;
	p.xuat();
	cout<<endl;
	int n;
	cout<<"Nhap so luong sinh vien: ";
	cin>>n;
	sinhvien *sv= new sinhvien[n];
	for (int i=0;i<n;i++){
		cout <<"Nhap phan tu thu: "<<i+1<<endl;
		sv[i].input();
		cout<<endl;
	}
	for (int i=0;i<n;i++){
		cout <<"Phan tu thu: "<<i+1<<endl;
		sv[i].output();
		cout<<endl;
	}
	
}


//	cau 2
//	MonHoc *ds;
//	int n;
//	cout <<"Nhap so luong mon hoc: ";
//	cin >>n;
//	ds= new MonHoc[n];
//	for (int i=0;i<n;i++){
//		cout <<"Phan tu thu: "<<i+1<<endl;
//		ds=nhap[i];
//	}
//	
//	for (int i=0;i<n;i++){
//		cout <<"Phan tu thu: "<<i+1<<endl;
//		ds=xuat[i];
//	}
