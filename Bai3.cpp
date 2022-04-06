#include<iostream>
using namespace std;

class Da_thuc_3{
	private:
		int a, b, c, d;
	public:
		Da_thuc_3(); // call non-constructor
		Da_thuc_3(int a, int b, int c, int d); // call constructor
		~Da_thuc_3(); //call destructor
		void nhap();
		void xuat();
};

Da_thuc_3 :: Da_thuc_3(){
	cout << "non - Constructor" << endl;
}

Da_thuc_3 :: Da_thuc_3(int a, int b, int c, int d){
	cout << "Constructor" << endl;
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}

Da_thuc_3 :: ~Da_thuc_3(){
	cout << "Destructor" << endl;
}

void Da_thuc_3 :: nhap(){
	cout << "Nhap he so a, b va d: "; cin >> a >> b >> c >> d;
}

void Da_thuc_3 :: xuat(){
	cout << a << "x3 + " << b << "x2 + " << c << "x + " << d << endl; 
}

int main(){
	Da_thuc_3 x[2];
	for(int i=0; i<2; i++){
		x[i].nhap();
	}
	cout << "\n";
	for(int i=0; i<2; i++){
		x[i].xuat();
	}
	cout << "\n";
	return 0;
}
