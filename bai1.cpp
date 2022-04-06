#include<iostream>
#include<stdio.h>
using namespace std;

class Khach_hang{
	private:
		char ht[30], cmt[10], shk[50];
		struct dob{
	    int ngay, thang, nam;
   }ns;
	public:
		Khach_hang();
		Khach_hang(char ht, char cmt, char shk, int ngay, int thang, int nam);
		~Khach_hang();
		void nhap();
		void xuat();
	int nam(){
		return ns.nam;
	}
	string shkhau(){
		return shk;
	}	
};

Khach_hang :: Khach_hang(){
	cout << "Ham khoi tao duoc goi\n";
}

Khach_hang :: Khach_hang(char ht, char cmt, char shk, int ngay, int thang, int nam){
	this->ht[30]=ht;
	this->cmt[10]=cmt;
	this->shk[50]=shk;
	this->ns.ngay=ngay;
	this->ns.thang=thang;
	this->ns.nam=nam;
}

Khach_hang :: ~Khach_hang(){
}

void Khach_hang :: nhap(){
    fflush(stdin);
	cout << "Nhap ten: ";
	cin.getline(ht, 30);
	cout << "Nhap ngay thang nam sinh: ";
	cin >> ns.ngay >> ns.thang >> ns.nam;
	fflush(stdin);
	cout << "Nhap chung minh thu: ";
	cin.getline(cmt, 10);
	cout << "Nhap so ho khau: ";
	cin.getline(shk, 50);
}

void Khach_hang :: xuat(){
	cout << "Name: " << this->ht << endl;
	cout << "Date of birth: " << this->ns.ngay << "/" << ns.thang << "/" << ns.nam << endl;
	cout << "CMT: " << this->cmt << endl;
	cout << "SO ho khau: " << this->shk << endl;
	cout <<"\n";
}
	

int main(){
	int n;
	cout << "Nhap so khach hang:"; cin >> n;
	Khach_hang x[n];
	
	for(int i=0; i<n; i++){
		x[i].nhap();
	}
	cout << "\n";
	for(int i=0; i<n; i++){
		x[i].xuat();
	}
	
	cout << "\nSap xep theo tuoi:\n";
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(x[i].nam()>x[j].nam()){
				swap(x[i], x[j]);
			}
		}
	}
	for(int i=0; i<n; i++){
	x[i].xuat();
	}
	for(int i=0; i<n; i++){
		x[i].xuat();
	}
	cout << "Danh sach khach hang o Ha Noi\n";
	for(int i=0; i<n; i++){
	if(x[i].shkhau() == "Ha Noi"){
	x[i].xuat();
	}
	}
	return 0;
}
