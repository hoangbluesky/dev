#include <iostream>
#include <string>
using namespace std;

class SinhVien{
	private:
		int maSV;
		string hoTen;
	public:
		SinhVien();
		~SinhVien();
		void nhap();
		void xuat();
		friend istream& operator >>(istream &is,SinhVien &sv);
		friend ostream& operator <<(ostream &os,SinhVien &sv);
};
SinhVien::SinhVien(){
	maSV=0;
	hoTen="";
}
SinhVien::~SinhVien(){
	
}
void SinhVien::nhap(){
	cout << "Nhap ma sinh vien: ";
	cin >> maSV;
	fflush(stdin);
	cout << "Nhap ten sinh vien: ";
	getline(cin,hoTen);
	fflush(stdin);
}
void SinhVien::xuat(){
	cout <<"Ma sinh vien: "<<maSV;
	cout<<"\nHo ten: "<<hoTen;
	cout<<endl;
}
istream& operator >>(istream &is,SinhVien &sv){
	cout << "Nhap ma sinh vien: ";
	is >> sv.maSV;
	fflush(stdin);
	cout << "Nhap ten sinh vien: ";
	getline(is,sv.hoTen);
	fflush(stdin);
}
ostream& operator <<(ostream &os,SinhVien &sv){
	os <<"Ma sinh vien: "<<sv.maSV;
	os<<"\nHo ten: "<<sv.hoTen;
}
class svai: private SinhVien{
	private:
		float dtb;
	public:
		svai();
		~svai();
		void input();
		void output();
		friend operator < (svai x, svai y);
};
svai::svai(){
	dtb=0;
}
svai::~svai(){
	
}
void svai::input(){
	SinhVien::nhap();
	cout <<"Nhap diem TB: ";
	cin >> dtb;
}
void svai::output(){
	SinhVien::xuat();
	cout<<"Diem TB: "<<dtb;
}
operator < (svai x, svai y){
	return x.dtb < y.dtb;
}
int main(){
	SinhVien sv;
	cout<<"Nhap thong tin sinh vien: \n";
	cin>>sv;
	cout<<sv;
	int n;
	cout << "\nNhap n sinh vien AI: ";
	cin>>n;
	svai *ds;
	ds= new svai[n];
	for(int i=0;i<n;i++){
		cout <<"Nhap sinh vien AI thu: "<<i+1<<endl;
		ds[i].input();
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		cout <<"Sinh vien AI thu: "<<i+1<<endl;
		ds[i].output();
		cout<<endl<<endl;
	}
	for( int i = 0 ; i < n-1 ; i++ )
		for( int j =  i+1 ; j < n ; j++ )
			if( ds[i] < ds[j] ){
				swap(ds[i],ds[j]);
			}
	for(int i=0;i<n;i++){
		cout <<"Sinh vien AI thu: "<<i+1<<endl;
		ds[i].output();
		cout<<endl<<endl;
	}
}












