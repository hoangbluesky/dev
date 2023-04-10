#include <iostream>
using namespace std;

class lophoc{
	private:
		int malop;
		string tenlop;
	public:
		lophoc();
		void input();
		void output();
		int getmalop(){
			return this->malop;
		}
};

lophoc::lophoc(){
	malop=0;
	tenlop="";
}
void lophoc::input(){
	cout<<"Nhap ma lop: ";
	cin>>malop;
	cout<<"Nhap ten lop: ";
	fflush(stdin);
	getline(cin,tenlop);
}
void lophoc::output(){
	cout<<"Ma lop: "<<malop<<endl;
	cout<<"Ten lop: "<<tenlop<<endl;
}
class giangday:public lophoc
{
	private:
		int magv;
		int mamh;
		int sotinchi;
	public:
		giangday();
		void nhap();
		static int sotietday;
		void xuat();
		void co3tinchi();
		int sotietconlai(){
			return sotinchi*15 - sotietday;
		}
		int getmagv(){
			return this->magv;
		}
};

int giangday::sotietday =10;

giangday::giangday(){
	magv=mamh=sotinchi=0;
}
void giangday::nhap(){
	lophoc::input();
	cout<<"Nhap ma giang vien: ";
	cin >>magv;
	cout<<"Nhap ma mon hoc: ";
	cin >>mamh;
	cout<<"Nhap so tin chi: ";
	cin >>sotinchi;
}
void giangday::xuat(){
	cout<<"Ma giang vien: "<<magv<<endl;
	cout<<"Ma mon hoc: "<<mamh<<endl;
	cout<<"Ma lop: "<<getmalop();
	cout<<"So tin chi: "<<sotinchi<<endl;
}
void giangday::co3tinchi(){
	if(sotinchi==3){
		lophoc::output();
	}
}
int main(){
	lophoc x;
	x.input();
	cout<<endl;
	x.output();
	
	int n;
	cout<<"Nhap so luong giang day: ";
	cin>>n;
	giangday *a;
	a= new giangday[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap giang day thu: "<<i+1<<endl;
		a[i].nhap();
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		cout<<"Giang day thu: "<<i+1<<endl;
		a[i].xuat();
		cout<<endl;
	}
	cout<<"Cac lop hoc co 3 tin chi: \n";
	for(int i=0;i<n;i++){
		a[i].co3tinchi();
	}
	cout<<"Ma giang vien co so tiet con lai thap nhat: \n";
	int min=a[0].sotietconlai();
	for (int i=0;i<n;i++){
		if (a[i].sotietconlai()<=min){
			min =a[i].sotietconlai();
		}
	}
	for(int i=0;i<n;i++){
		if(a[i].sotietconlai()==min){
			cout<<a[i].getmagv();
			cout<<endl;
		}
	}
}




















