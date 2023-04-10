#include <iostream>
#include <string.h>
using namespace std;

class Sinhvien{
	private:
		string MaSV;
		string Hoten;
	public:
		Sinhvien(){
			MaSV ="";
			Hoten ="";
		};
		void input(int n);
		void output(int n);
	~Sinhvien(){
		cout << "\nCall Destructor!"<<endl;
	}
};
void Sinhvien::input(int n){
//	for (int i=0;i<n;i++){
		cout << "Nhap thong tin sinh vien thu "<< n+1 <<"\n";
		cout << "Nhap Ma sinh vien: ";
		cin.ignore();
		getline(cin ,MaSV);
		cout << "Nhap ten: ";
		getline(cin,Hoten);
//	}
}
void Sinhvien::output(int n){
//	for (int i=0;i<n;i++){
		cout << "\nThong tin sinh vien la thu " << n+1 << " la:";
		cout << "\nMa Sinh Vien: " << MaSV << endl;
	    cout << "Ten: " <<Hoten << endl;
//	}
}
int main(){
	int n;
	cout << "Nhap so luong sinh vien: ";
	cin >>n;
	Sinhvien svs[n];
	for(int i = 0 ; i<n ; i++){
		Sinhvien sv;
		sv.input(i);
		svs[i] = sv;
	}
	for(int i = 0 ; i<n ; i++){
		svs[i].output(i);
	}		
}
