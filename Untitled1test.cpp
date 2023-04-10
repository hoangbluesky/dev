#include<iostream>
#include<iomanip>
#include<string>
 using namespace std;
 
 // xay dung lop sinhvien
class sinhvien{
	private:
		int masv;
		string hoten;
	public:
		sinhvien(){
			masv=0;
			hoten="";
		}
		~sinhvien(){
			masv=0;
			hoten ="";
		}
		void input();
		void output();
};
// nhap sinhvien
void sinhvien::input(){
	cout << "Nhap ma ";
	cin >> masv;
	fflush(stdin);
	cout << "Nhap ten ";
	getline (cin,hoten);
	fflush(stdin);
}
//xuat sinh vien
void sinhvien::output(){
	cout <<"Ma sinh vien: "<< masv;
	cout <<"\nHo ten: "<< hoten;
}
//xay dung lop SVTMDT
class SVTMDT:public sinhvien {
	private:
		float diem;
	public:
		SVTMDT(){
			diem=0;
		}
		~SVTMDT(){
		}
		void nhap();
		void xuat();
	
		friend bool operator < (SVTMDT x,SVTMDT y);

		
};
void SVTMDT::nhap(){
	sinhvien::input();
	cout<<"Nhap diem: ";
	cin >> diem;
	fflush(stdin);
}
void SVTMDT::xuat(){
	sinhvien::output();
	cout <<"\nDiem: "<<diem;
	fflush(stdin);
}
bool operator < (SVTMDT x,SVTMDT y)
{
	return x.diem < y.diem;
}
int main (){
	sinhvien sv;
	SVTMDT dt;
	cout << "Nhap thong tin sinh vien\n";
	sv.input();
	cout << "\nSinh vien vua nhap la:\n";
	sv.output();
	
	int n;
	cout <<"\nNhap so luong sinh vien TMDT: ";
	cin >>n;
	SVTMDT *ds;
	ds= new SVTMDT[n];
	for (int i=0;i<n;i++){
		cout<<"Sinh vien thu: "<<i+1<<endl;
		ds[i].nhap();
		cout<<endl;
	}
	cout << "\nThong tin sinh vien TMDT\n";
	for(int i=0;i<n;i++){
		cout<<"\nSinh vien thu: "<<i+1<<endl;
		ds[i].xuat();
		cout<<endl;
	}	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ds[i]<ds[j])
			{
				swap(ds[i],ds[j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<"\nSinh vien thu: "<<i+1<<endl;
		ds[i].xuat();
		cout<<endl;
	}	
}
