#include <iostream>
using namespace std;
// max
template <class T> T maxx(T a, T b){
	if(a>b){
		return a;
	}else {
		return b;
	}
}
// tong
template <class T1, class T2,class T3> T2 tinhtong(T1 x, T2 y, T3 z){
	return x+y+z;
}
template <class T> class mt {
	public:
		int spt;
//		T data[20];
		T *data;
	public:
		~mt();
		void nhap();
		void in();
		
}
template <class T> mt <T>::~mt(){
	delete [] data;
}
template <class T> void mt<T>::nhap(){
	cout << "Nhap so luong: ";
	cin >> spt;
	data = new [spt];
	for (int i=0;i<spt;i++){
		cout<< "Nhap phan tu: "<< i+1<<endl;
		cin >> data[i]; 
	}
}
template <class T> void mt<T>::in(){
	cout << "Danh sach: \n";
	for (int i=0;i<spt;i++){
		cout<< "Phan tu: "<< i+1;
		cout << data[i];
	}
}
int main (){
	
//	float a=3.3;
//	float b=4.2;
//	float m = maxx(a,b);
//	cout <<"max: "<< m <<endl;
//	
//	int x=5;
//	float y=2.5;
//	double z= 5.7;
//	cout << "tong: "<< tinhtong(x,y,z) << endl;
	
	mt<int> a;
	a.nhap();
	a.in();
}
