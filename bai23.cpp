#include <iostream>
#include <stdbool.h>
using namespace std;

class thisinh {
	private:
		int sbd;
		string hoten;
		string dc;
		float diemut;
	public:
		
		thisinh(){
			sbd=diemut=0;
			hoten=dc="";
		}
		~thisinh(){
		}
		void nhap();
		void xuat();
		float getdiemut(){
			return this->diemut;
		}
};
void thisinh::nhap(){
	cout<<"Nhap so bao danh: ";
	cin>>sbd;
	cout<<"Nhap ho ten: ";
	fflush(stdin);
	getline(cin,hoten);
	cout<<"Nhap dia chi: ";
	fflush(stdin);
	getline(cin,dc);
	cout<<"Nhap diem uu tien: ";
	cin>>diemut;
}
void thisinh::xuat(){
	cout<<"So bao danh: "<<sbd<<endl;
	cout<<"Ho ten "<<hoten<<endl;
	cout<<"Dia chi: "<<dc<<endl;
	cout<<"Diem uu tien: "<<diemut<<endl;
}
class thisinhkhoia :public thisinh{
	private:
		float toan,ly,hoa;
	public:
		thisinhkhoia(){
			toan=ly=hoa=0;
		}
		~thisinhkhoia(){
		}
		void input();
		void output();
		float tongdiem(){
			return toan+ly+hoa+getdiemut();
		}
		
		friend bool operator >(thisinhkhoia x,thisinhkhoia y);
};
void thisinhkhoia::input(){
	thisinh::nhap();
	cout<<"Nhap lan luot diem toan ly hoa: ";
	cin>>toan>>ly>>hoa;
}
void thisinhkhoia::output(){
	thisinh::xuat();
	cout<<"Tong diem: "<<tongdiem();
}
bool operator >(thisinhkhoia x,thisinhkhoia y){
	return x.tongdiem()>y.tongdiem();
}
int main(){
	thisinh x;
	x.nhap();
	x.xuat();
	int n;
	cout<<"Nhap n ";
	cin>>n;
	thisinhkhoia *a;
	a=new thisinhkhoia[n];
	for (int i=0;i<n;i++){
		a[i].input();
		cout<<endl;
	}
	for (int i=0;i<n;i++){
		a[i].output();
		cout<<endl;
		cout<<endl;
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	for (int i=0;i<n;i++){
		a[i].output();
		cout<<endl;
		cout<<endl;
	}
}
















