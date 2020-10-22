<<<<<<< HEAD
#include <iostream>
#include <cstdlib>
#include <ctime>
=======
﻿#include <iostream>
>>>>>>> 4e2df5b74d654bb0395710152dfde239ac395c95
using namespace std;

//-------------Bài 1---- cộng trừ nhân chia 2 số
int PhepCong(int a, int b)
{
	return a+b;
}

int PhepTru(int a, int b)
{
	return a-b;
}

int PhepNhan(int a, int b)
{
	return a*b;
}

int PhepChia(int a, int b)
{
	return a/b;
}

//-------------Bài 2---- tính chu vi, diện tích hình tròn, chữ nhật, vuông
void TinhChuViDienTichHinhChuNhat(int a, int b)
{
	int a,b;
    cout << "-----------Tinh DT HCN----------\n";
	cout <<"nhap chieu rong  ";
	cin>>a;
	cout<<"nhap chieu dai  ";
	cin>>b;
    cout << "Dien tich hcn : " << a*b;
	cout<< "Chu vi hcn:"<<<(a+b)*b;
    return 0;
}

void TinhChuViDienTichVuong(int a)
{
	int a;
    cout << "-----------Tinh DT HV----------\n";
	cout <<"nhap chieu canh  ";
	cin>>a;
    cout << "Dien tich hcn : " << a*a;
	cout<< "Chu vi hcn:"<<<a*4;
    return 0;
	
	
}

void TinhChuViDienTichHinhTron(int a)
{
	int a;
    cout << " -----------Tinh DT HT---------- ";
    float r;
    cout << "nhap vao ban kinh r = " ;
    cin >> r;
    cout << "dien tic hinh tron la : " << r*r*3.14;
	cout<<"chu vi hinh tron la :"<<r*2*3.14;
	return 0;
}


//-------------Bài 3----
bool HieuRand2so() //Random 2 số, nhập 1 số và so sánh số và kết quả a-b
{
	bool kq;
	srand(time(NULL));
	int a = rand() % (100 - 0 + 1);
	int b = rand() % (100 - 0 + 1);
	int hieu = a - b;
	int kqn;
	cout << "Hiệu của " << a << " và " << b << "là = ? ";
	cin >> kqn;
	if (hieu == kqn)
	{
		kq = true;
	}
	else
	{
		kq = false;
	}
	return kq;
}

//-------------Bài 4----
bool TongRand2so() //Random 2 số, nhập 1 số và so sánh số và kết quả a+b
{
	bool kq;
	srand(time(NULL));
	int a = rand() % (100 - 0 + 1);
	int b = rand() % (100 - 0 + 1);
	int tong = a + b;
	cout << "Nhap 1 so: ";
	cin >> ket;
	if (tong == ket)
	{
		kq = true;
	}
	else
	{
		kq = false;
	}


	return kq;
}



int main() {
	int a, b;
	cout << "Nhập a: ";
	cin >> a;
	cout << "Nhập b: ";
	cin >> b;

	int chon;
	cout << "1.Tính a + b " << endl;
	cout << "2.Tính a - b " << endl;
	cout << "3.Tính a * b " << endl;
	cout << "4.Tính a / b " << endl;
	cout << "5.Tính chu vi và diện tích hình chữ nhật" << endl;
	cout << "6.Tính chu vi và diện tích hình vuông" << endl;
	cout << "7.Tính chu vi và diện tích hình tròn" << endl;
	cout << "8.Tính tổng hai số random " << endl;
	cout << "9.Tính hiệu hai số random:" << endl;
	cout << " Nhập lựa chon của bạn :" << endl;
	cin >> chon;

	switch (chon)
	{
	case 1:
		cout << "a + b = "<<PhepCong(a, b);
		break;
	case 2:
		cout << "a - b = " << PhepTru(a, b);
		break;
	case 3:
		cout << "a * b = " << PhepNhan(a, b);
		break;
	case 4:
		cout << "a / b = " << PhepChia(a, b);
		break;
	case 5:
		
		break;
	case 6:
		
		break;
	case 7:
		
		break;
	case 8:
		
		break;
	case 9:
		if (HieuRand2so()==true)
			cout << "\nKết quả bạn nhập là ĐÚNG!!" << endl;
		else
		cout << "\nKết quả bạn nhập là SAI!!"<<endl;
		break;
	default:
		break;
	}

	system("pause");
	return 0;
}