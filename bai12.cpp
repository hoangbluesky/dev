#include<iostream>
#include<string>
using namespace std;
class nhanvien{
	private:
		int manv;
		string hoten;
		int tuoi;
	public:
		nhanvien();
		void nhap();
		void xuat();
		bool vehuu();
};
bool nhanvien::vehuu(){
	if(tuoi>=60) {
		return true;
	}else return false;	
}
nhanvien::nhanvien(){
	manv=tuoi=1;
	hoten="";
}
void nhanvien::nhap(){
	cout<<"nhap ho ten:";
	fflush(stdin);
	getline(cin,hoten);
	cout<<"nhap tuoi:";
	cin>>tuoi;
}
void nhanvien::xuat(){
	cout<<"Ho ten "<<hoten<<endl;
	cout<<"tuoi "<<tuoi<<endl;
}


class canbo: public nhanvien{
	private:
		int hesoluong;
		int phucap;
		string trinhdo;
	public:
		canbo();
		void input();
		void output();
		float tinhluong();
		void chuahuu();
};
float canbo::tinhluong(){
	float luong=hesoluong*1550+phucap;
	if(vehuu()== true){
		return luong *70/100;
	}else{
		return luong;
	}
}
void canbo::chuahuu(){	
	if (vehuu()==false &&hesoluong >7){
		output();
		}
	}

canbo::canbo(){
	hesoluong=phucap=1;
	trinhdo="";
}
void canbo::input(){
	nhanvien::nhap();
	cout<<"nhap he so luong:";
	cin>>hesoluong;
	cout<<"nhap phu cap:";
	cin>>phucap;
	cout<<"nhap trinh do:";
	fflush(stdin);
	getline(cin,trinhdo);
}
void canbo::output(){
	nhanvien::xuat();
	cout<<"He so luong: "<<hesoluong<<endl;
	cout<<"Phu cap: "<<phucap<<endl;
	cout<<"Trinh do: "<<trinhdo<<endl;
}

int main(){
	nhanvien x;
	x.nhap();
	x.xuat();
	
	int n;
	cout<<"\nnhap so luong:";
	cin>>n;
	canbo *cb=new canbo[n];
	cout<<"\nNhap thong tin tung doi tuong:\n";
	for(int i=0;i<n;i++){
		cb[i].input();
		cout<<endl;
	}
	
	cout<<"\nThong tin tung doi tuong:\n";
	for(int i=0;i<n;i++){
		cb[i].output();
		cout<<"Tien luong: "<<cb[i].tinhluong();
		cout<<endl<<endl;
	}
	cout <<"\nChua ve huu he so luong lon hon 7\n";
		for(int i=0;i<n;i++){
			cb[i].chuahuu();
		}
}
