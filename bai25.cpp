#include <iostream>
#include <string>
using namespace std;

class sv {
	private:	
		int masv;
		string hoten;
	public:
		sv();
		~sv();
		void nhap();
		void xuat();
};
sv::sv(){
	masv=0;
	hoten="";
}
sv::~sv(){
}
void sv::nhap(){
	cout<<"Nhap ma sinh vien: ";
	cin>>masv;
	cout<<"Nhap ten sinh vien: ";
	fflush(stdin);
	getline(cin,hoten);
}
void sv::xuat(){
	cout<<"Ma sinh vien: "<<masv<<endl;
	cout<<"Ho ten: "<<hoten<<endl;
}
class svsdh:public sv{
	private:
		float hocphi;
	public:
		svsdh();
		~svsdh();
		void input();
		void output();
		void hocphilon();		
};
svsdh::svsdh(){
	hocphi =0;
}
svsdh::~svsdh(){
	
}
void svsdh::input(){
	sv::nhap();
	cout<<"Nhap hoc phi: ";
	cin>>hocphi;
}
void svsdh::output(){
	sv::xuat();
	cout<<"Tien hoc phi: "<<hocphi<<endl;
}
void svsdh::hocphilon(){
	if(hocphi>9){
		output();
	}
}
int main(){
	sv a;
	a.nhap();
	cout<<endl;
	a.xuat();
	
	int n;
	cout<<"Nhap so luong sinh vien cao hoc: ";
	cin>>n;
	
	svsdh *ds=new svsdh[n];
	for (int i=0;i<n;i++){
		cout<<"Nhap sinh vien cao hoc thu: "<<i+1<<endl;
		ds[i].input();
		cout<<endl;
	}
	for (int i=0;i<n;i++){
		cout<<"Sinh vien cao hoc thu: "<<i+1<<endl;
		ds[i].output();
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		ds[i].hocphilon();
		cout<<endl;
	}
}
