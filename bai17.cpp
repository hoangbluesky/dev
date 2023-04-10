#include <iostream>
#include <string>
using namespace std;
class monhoc {
	private :
		int mamh;
		string tenmh;
	public:
		monhoc(){
			mamh=0;
			tenmh="";
		}
		void nhap();
		void xuat();
};
void monhoc::nhap(){
	cout <<"Nhap ma mon hoc: ";
	cin >>mamh;
	cout<<"NHap ten mon hoc:";
	fflush(stdin);
	getline(cin,tenmh);
}
void monhoc::xuat(){
	cout<<"Ma mon hoc: "<<mamh<<endl;
	cout<<"Ten mon hoc: "<<tenmh<<endl;
}
class giangday:public monhoc{
	private:
		int magv;
		int malop;
		int sotinchi;
	public:		
		giangday();
		void input();
		void output();
		static int tietday;
		float tinhtien();
		void mh_3tin();
};
giangday::giangday(){
	magv=malop=sotinchi=0;
}

int giangday::tietday=10;

void giangday::mh_3tin(){
	if(sotinchi==3){
		xuat();
	}
}

float giangday::tinhtien(){
	return sotinchi*15-tietday;
}
void giangday::input(){
	cout<<"Nhap ma giang vien: ";
	cin >>magv;
	cout<<"Nhap ma lop: ";
	cin >>malop;
	monhoc::nhap();
	cout<<"Nhap so tin chi: ";
	cin >>sotinchi;
	
}
void giangday::output(){
	cout<<"Ma giang vien: "<<magv<<endl;
	cout<<"Ma lop: "<<malop<<endl;
	monhoc::xuat();
	cout<<"so tin chi: "<<sotinchi<<endl;
}
int main(){
	monhoc mh;
	cout<<"Nhap thong tin cho 1 mon hoc: \n";
	mh.nhap();
	cout<<"Thong tin cho 1 mon hoc: \n";
	mh.xuat();
	int n;
	cout<<"Nhap so nguoi giang day: ";
	cin>>n;
	giangday *ds;
	ds= new giangday[n];
	for(int i=0;i<n;i++){
		ds[i].input();
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		ds[i].output();
		cout <<"so tien day: "<<ds[i].tinhtien();
		cout<<endl;
	}
	cout<<"Mon hoc co 3 tin chi:\n";
	for(int i=0;i<n;i++){
		ds[i].mh_3tin();
	}
	float min=ds[0].tinhtien();
	for(int i=0;i<n;i++){
		if(ds[i].tinhtien()<=min){
			min=ds[i].tinhtien(); 
		}
	}
	cout<<"\n\ncac giang vien co so tiet day thap nhat:\n ";
	for(int i=0;i<n;i++){
		if(ds[i].tinhtien()==min){
			ds[i].output();
			cout <<"so tien day: "<<ds[i].tinhtien();
			cout<<endl;
		}
	}
}
