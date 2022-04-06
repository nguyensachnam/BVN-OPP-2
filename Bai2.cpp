#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Giao_vien{
	private:
		char ht[30], bc[15], cn[20];
		int age;
		float bl, lcb;
	public:
		~Giao_vien();
		void nhap();
		void xuat();
		float tinh();
		string bcap(){
			return bc;
		}
		string name(){
			return ht;
		}
};

Giao_vien :: ~Giao_vien(){
	
}

void Giao_vien :: nhap(){
	fflush(stdin);
	cout << "Nhap ten giao vien: "; cin.getline(ht, 30);
	cout << "Nhap tuoi: "; cin >> age;
	fflush(stdin);
	cout << "Nhap bang cap: "; cin.getline(bc, 15);
	cout << "Nhap chuyen nganh: "; cin.getline(cn, 20);
	cout << "Nhap bac luong: "; cin >> bl;
}

float Giao_vien :: tinh(){
	return bl * 610;
}

void Giao_vien :: xuat(){
	cout << "Name: " << this->ht << endl;
	cout << "Age: " << this->age << endl;
	cout << "Bang cap: " << this->bc << endl;
	cout << "Chuyen nganh: " << this->cn << endl;
	cout << "Luong co ban: " << tinh() << endl;
	cout << "\n";
}


int main(){
	int n;
	cout << "Nhap so luong giao vien: "; cin >> n;
	Giao_vien x[n];
	
	for(int i=0; i<n; i++){
		x[i].nhap();
	}
	cout << "\n";
	for(int i=0; i<n; i++){
		x[i].xuat();
	}
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(x[i].bcap()==x[j].bcap()){
				cout << "Giao vien co bang cap bang nhau la: " << x[i].name() << " va " << x[j].name() << endl;
			}
		}
	}
	
	for(int i=0; i<n; i++){
		x[i].xuat();
	}
	
	return 0;
}
