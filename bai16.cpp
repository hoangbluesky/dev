#include<iostream>
#include<string>
using namespace std;
//3 ham struct
struct CAUTHU{
	int mact;
	string tenct;
	string vitri;
	int tuoi;
	float tienthuong;
};
typedef struct CAUTHU cauthu;
struct NODE{
	cauthu data;
	NODE *next;
};
typedef struct NODE node;
struct LIST{
	node *head;
	node *tail;
};
typedef struct LIST list;
//ham khoitao 2 ham
node *createnode(cauthu &x){
	node *p=new node;
	if(p==NULL){
		cout<<"Khong du bo nho";
	}else{
		p->data=x;
		p->next=NULL;	
	}
	return p;
}
void taolist(list &ds){
	ds.head=ds.tail=NULL;
}

//THEM DAU
void themdau(list &ds,node *p){
	if(ds.head==NULL){
		ds.head=ds.tail=p;
	}else{
		p->next=ds.head;
		ds.head=p;
	}
}
void themcuoi(list &ds,node *p){
	if(ds.head==NULL){
		ds.head=ds.tail=p;
	}else{
		ds.tail->next=p;
		ds.tail=p;	
	}
}
void nhap(list &ds,cauthu x){
	cout<<"Nhap ma cau thu: ";
	cin>>x.mact;
	cout<<"Nhap ten cau thu: ";
	fflush(stdin);
	getline(cin,x.tenct);
	cout<<"Nhap vi tri thi dau: ";
	fflush(stdin);
	getline(cin,x.vitri);
	cout<<"Nhap tuoi: ";
	cin>>x.tuoi;
	cout<<"Nhap tien thuong: ";
	cin>>x.tienthuong;
	node *p=createnode(x);
	themcuoi(ds,p);
}
void xuat(list ds){
	for(node *p=ds.head;p!=NULL;p=p->next){
		cout<<p->data.mact<<"\t\t"<<p->data.tenct<<"\t\t"<<p->data.vitri<<"\t\t"<<p->data.tuoi<<"\t\t"<<p->data.tienthuong<<endl;
	}
}
void sapxep(list ds){
	for(node *p=ds.head;p!=NULL;p=p->next){
		for(node *k=p->next;k!=NULL;k=k->next){
			if(p->data.tuoi > k->data.tuoi){
				swap(p->data,k->data);
			}
		}
	}
}
void hienthi(list ds){
	for(node *p=ds.head;p!=NULL;p=p->next){
		if(p->data.tuoi == 17){
			cout<<p->data.mact<<"\t\t"<<p->data.tenct<<"\t\t"<<p->data.vitri<<"\t\t"<<p->data.tuoi<<"\t\t"<<p->data.tienthuong<<endl;	
		}
	}
}
int main(){
	cauthu x;
	list ds;
	taolist(ds);
	
	int n;
	cout<<"Nhap so luong cau thu: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		nhap(ds,x);
		cout<<endl;
	}
	cout<<"\nMa cau thu\t\tTen cau thu\t\tVi tri\t\tTuoi\t\tTien thuong\n";
	xuat(ds);
	cout<<"\nDanh sach sau khi sap xep :\n";
	sapxep(ds);
	xuat(ds);
	cout<<"\nDanh sach cau thu 17 tuoi :\n";
	hienthi(ds);
}































//#include<iostream>
//#include<string>
//using namespace std;
//
////dinh nghia 3 cau truc
//struct cauthu{
//	int mact;
//	string tenct;
//	string vitri;
//	int tuoi;
//	float tienthuong;
//};
//
//typedef struct cauthu ct;
//struct NODE{
//	ct data;
//	NODE *next;
//};
//
//typedef struct NODE node;
//struct LIST{
//	node *head;
//	node *tail;
//};
//typedef struct LIST list;
////khoi tao
//node *createnode (ct &x){
//	node *p =new node;
//	if (p==NULL){
//		cout<<"Khong du bo nho";
//	}else{
//		p->data=x;
//		p->next=NULL;
//	}
//	return p;
//}
//void taolist(list &ds){
//	ds.head=NULL;
//	ds.tail=NULL;
//}
//
////HAM THEM dau
//void inputhead(list &ds, node *p){
//	if(ds.head==NULL){
//		ds.head=ds.tail=p;
//	}else{
//		p->next=ds.head;
//		ds.head=p;
//	}
//}
////ham them cuoi
//void inputtail(list &ds, node *p){
//	if(ds.head==NULL){
//		ds.head=ds.tail=p;
//	}else{
//		ds.tail->next=p;
//		ds.tail=p;
//	}
//}















