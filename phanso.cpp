#include <iostream>

using namespace std;

class ps{
	private:
		int ts;
		int ms;
	public:
		ps(){
			ts=0;
			ms=1;
		}
		void nhap();
		void xuat();
		void congps();
		friend istream &operator >>(istream &is, ps&PS);
		friend ostream &operator <<(ostream &os, ps&PS);
		friend ps &operator +(ps x, ps y);
};
void ps::nhap(){
	cout<<"Nhap tu so: ";
	cin >>ts;
	cout<<"Nhap mau so: ";
	cin >>ms;
	cout<<endl;
}
void ps::xuat(){
	cout <<"phan so la: "<<ts<<"/"<<ms;
}
istream &operator >>(istream &is, ps&PS){
	cout<<"Nhap tu so: ";
	is >>PS.ts;
	cout<<"Nhap mau so: ";
	is >>PS.ms;
	cout<<endl;
	return is;
}
ostream &operator <<(ostream &os, ps&PS){
	os <<"phan so la: "<<PS.ts<<"/"<<PS.ms;
	return os;
}
// cong 2 phan so
ps &operator +(ps x, ps y){
	ps c;
	c.ts= (x.ts * y.ms) + (y.ts * x.ms);
	c.ms =x.ms *y.ms;
	return c;
}
int main(){
	ps x;
	ps y;
	ps c;
	
//	x.nhap();
//	x.xuat();
	cout <<"Nhap phan so thu 1\n";
	cin >>x;
	cout <<"Nhap phan so thu 2\n";
	cin >>y;
	cout <<"Phan so thu 1: "<<x<<endl;
	cout <<"Phan so thu 2: "<<y<<endl;
	c=x+y;
	cout <<"tong = "<<c;
}
