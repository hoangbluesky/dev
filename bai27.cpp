#include <iostream>
#include <string>
using namespace std;
class media {
	private :
		string tengoi;
		float giaban;
	public:
		media(){
			giaban=0;
			tengoi="";
		}
		~media();
		void nhap();
		void xuat();
		string getname();
};
media::~media(){
	
}
void media::nhap(){
	cout <<"Nhap ten goi: ";
	fflush(stdin);
	getline(cin,tengoi);
	cout<<"NHap gia ban:";
	cin >>giaban;
}
void media::xuat(){	
	cout<<"Ten goi: "<<tengoi<<endl;
	cout<<"Gia ban: "<<giaban<<endl;
}
string media::getname(){
	return this->tengoi;
}
class video:public media{
	private:
		float timechay;	
	public:		
		video();
		void input();
		void output();
		void timtensach();
};
video::video(){
	timechay=0;
}
void video::input(){
	cout<<"Nhap thoi gian chay: ";
	cin >>timechay;
	media::nhap();	
}
void video::output(){
	cout<<"Thoi gian chay: "<<timechay<<endl;
	media::xuat();
	cout<<endl;
}
void video::timtensach(){
	string python="Huong dan lap trinh Python";
	if( getname()==python && timechay >10){
		output();
	}
}
int main(){
	media m;
	cout<<"Nhap thong tin cho 1 phuong tien truyen thong: \n";
	m.nhap();
	cout<<"Thong tin cho 1 phuong tien truyen thong: \n";
	m.xuat();
	int n;
	cout<<"Nhap n doi tuong video: ";
	cin>>n;
	video *ds;
	ds= new video[n];
	for(int i=0;i<n;i++){
		ds[i].input();
		cout<<endl;
	}
	cout<<"\nThong tin n doi tuong video: \n";
	for(int i=0;i<n;i++){
		ds[i].output();
		cout<<endl;
		cout<<ds[i].getname();
	}
	cout<<"thong tin cuon sach python time chay >10:\n";
	
	for(int i=0;i<n;i++){
		ds[i].timtensach();
		cout<<endl;
	}
}
