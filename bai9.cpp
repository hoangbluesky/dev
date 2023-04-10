//BAI 8
#include"iostream"
#include"iomanip"
#include"cstring"
#include"stdlib.h"
using namespace std;
class Media {
	private:
		string ten;
		float giaban;
	public:
		Media(){}
		~Media(){}
		void Nhap();
		void Xuat();
		string getTen () {
			return ten;
		}
};

void Media::Nhap() {
	cout<<"Nhap ten : "; fflush(stdin); getline(cin,ten);
	cout<<"Nhap gia ban: "; cin>>giaban;
}
void Media::Xuat () {
	cout<<"Ten: "<<ten<<endl;
	cout<<"Gia ban: "<<giaban<<endl;
}
class Video:public Media {
	friend void PyThonLonHon10DV (Video [], int  );
	private: 
	int thoigianchay;
	public:
		Video(){}
		~Video(){}
		void Nhap();
		void Xuat();	
	};
void Video::Nhap() {
	Media::Nhap();
	cout<<"Nhap thoi gian chay: "; cin>>thoigianchay;
}
void Video::Xuat() {
	Media::Xuat();
	cout<<"Thoi gian chay: "<<thoigianchay<<endl;
}
void NhapListVideo (Video a[], int &n) {
	cout<<"Nhap n: "; cin>>n;
	for(int i=0;i<n;i++) {
		a[i].Nhap();
	}
}
void XuatListVideo (Video a[], int n) {
	for(int i=0;i<n;i++) {
		a[i].Xuat();
	}
}
 void PyThonLonHon10DV (Video a[], int n) {
 for(int i = 0;i<n ;i++) {
		if(a[i].getTen() == "huongdanlaptrinhpython"&&a[i].thoigianchay>10) {
			a[i].Xuat();
		}
	}
}
int main () {
int n;
Media media;
media.Nhap();
media.Xuat();
Video video[100];
NhapListVideo(video,n);
XuatListVideo(video,n);
cout<<"Danh sach nhung cuon sach co ten Huong dan lap trinh Python co thoi gian chay tren 10 don vi la: "<<endl;
PyThonLonHon10DV(video,n);
return 0;
}
//BAI 9
#include"iostream"
#include"iomanip"
#include"cstring"
#include"stdlib.h"
using namespace std;
class Media {
	private:
		string tengoi;
		float giaban;
	public:
		Media () {};
		~Media () {};
		void Nhap ();
		void Xuat ();
		string getTenGoi () {
			return tengoi;
		}
	};
void Media::Nhap () {
	cout<<"Nhap ten goi: ";fflush(stdin); getline(cin,tengoi);
	cout<<"Nhap gia ban: "; cin>>giaban;
}
void Media::Xuat () {
	cout<<"Ten goi: "<<tengoi<<endl;
	cout<<"Gia ban: "<<giaban<<endl;
}
class Book:public Media {
	friend void XuatLapTrinhCNguyenThanhThuy (Book [], int );
	private:
		int sotrang;
		string tacgia;
	public:
		Book(){};
		~Book(){};
		void Nhap ();
		void Xuat();
};
void Book::Nhap () {
	Media::Nhap();
	cout<<"Nhap so trang: "; cin>>sotrang;
	cout<<"Nhap ten tac gia: "; fflush(stdin); getline(cin,tacgia);
}
void Book::Xuat () {
	Media::Xuat();
	cout<<"So trang: "<<sotrang<<endl;
	cout<<"Ten tac gia: "<<tacgia<<endl;
}
void NhapListBook (Book b[], int &n) {
	cout<<"Nhap n: "; cin>>n;
	for(int i =0;i<n;i++) {
		b[i].Nhap();
	}
}
void XuatListBook (Book b[], int n) {
	for(int i =0;i<n;i++) {
		b[i].Xuat();
	}
}
void XuatLapTrinhCNguyenThanhThuy (Book b[], int n) {
	for(int i = 0;i<n;i++) {
		if(b[i].getTenGoi() == "laptrinhc++"&&b[i].tacgia=="nguyenthanhthuy") {
			b[i].Xuat();
		}
	}
}
int main () {
int n;
Media m;
m.Nhap();
m.Xuat();
Book b[100];
NhapListBook(b,n);
XuatListBook(b,n);
cout<<"DANH SACH CUON SACH CON TEN LA LAP TRINH C++ CUA TAC GIA NGUYEN THANH THUY"<<endl;
