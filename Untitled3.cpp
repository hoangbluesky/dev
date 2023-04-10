#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string.h>

using namespace std;

class PhuongTienGiaoThong {
	private:
		string hangSX;
		string tenPT;
		int namSX;	
	public:
		float vantocMax;
		PhuongTienGiaoThong();
		void input();
		void output();
//		~PhuongTienGiaoThong();
		friend istream& operator >>(istream& is,PhuongTienGiaoThong &pt);
		friend ostream& operator <<(ostream& os,PhuongTienGiaoThong &pt);
};
PhuongTienGiaoThong::PhuongTienGiaoThong(){
	hangSX="";
	tenPT="";
	namSX=2022;
	vantocMax=50;	
}
void PhuongTienGiaoThong::input(){
	cout << "Nhap hang san xuat: ";
	fflush(stdin);
	getline(cin,hangSX);
	cout << "Nhap ten phuong tien: ";
	fflush(stdin);
	getline(cin,tenPT);
	cout << "Nhap hang san xuat: ";
	fflush(stdin);
	cin >> namSX;
	cout << "Nhap van toc: ";
	fflush(stdin);
	cin >> vantocMax;
}
void PhuongTienGiaoThong::output(){
	cout << "Hang san xuat: "<< hangSX<< endl;
	cout << "Ten phuog tien: "<< tenPT<< endl;
	cout << "Nam san xuat: "<< namSX<< endl;
	cout << "Van toc max: "<< vantocMax<< endl;	
}
istream& operator >>(istream& is,PhuongTienGiaoThong& pt){
	cout << "Nhap hang san xuat: ";
	fflush(stdin);
	getline(is,pt.hangSX);
	cout << "Nhap ten phuong tien: ";
	fflush(stdin);
	getline(is,pt.tenPT);
	cout << "Nhap hang san xuat: ";
	is >> pt.namSX;
	cout << "Nhap van toc: ";	
	is >> pt.vantocMax;
}
ostream& operator <<(ostream& os,PhuongTienGiaoThong& pt){
	os << "Hang san xuat: "<< pt.hangSX<< endl;
	os << "Ten phuog tien: "<< pt.tenPT<< endl;
	os << "Nam san xuat: "<< pt.namSX<< endl;
	os << "Van toc max: "<< pt.vantocMax<< endl;	
}
class oto: public PhuongTienGiaoThong{
	private:
		int ChoNgoi;
		string DongCo;
	public:
		oto();
		~oto();
		void nhap();
		void xuat();
};
int main(){
//	1
	PhuongTienGiaoThong ptgt;
	ptgt.input();
	cout<<endl;
	ptgt.output();
	cout <<endl;

//	2
	
	int n;
	cout << "Nhap so phuong tien: ";
	cin >>n;
	PhuongTienGiaoThong *ds;
	ds=new PhuongTienGiaoThong[n];
	for (int i=0;i<n;i++){
		cout <<"Nhap phuong tien thu: "<<i+1<<endl;
		ds[i].input();
		cout <<endl;
	}
// 3
	for (int i=0;i<n;i++){
		cout <<"Phuong tien thu: "<<i+1<<endl;
		ds[i].output();
		cout <<endl;
	}
// 4
//	cout <<"Xuat bang nap chong toan tu:\n";
//	for (int i=0;i<n;i++){
//		cout <<"Phuong tien thu: "<<i+1<<endl;
//		cout << ds[i];
//		cout <<endl;
//	}
}







