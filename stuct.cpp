#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
struct Sinhvien{
	char msv[10];
	char hoten[20];
	char ngaysinh[10];
	int sdt;
};
int Nhap(Sinhvien &x){
	int n;
		
		for (int i=0;i<=n;i++){
			
			cout<<"\nMa sinh vien la";
			gets(x.msv);
			cout<<"\nHo ten cua sinh vien la";
			gets(x.hoten);
			cout<<"\nNgay sinh cua sinh vien";
			gets(x.ngaysinh);
			cout<<"\nSo dien thoai cua sinh vien";
			cin>>x.sdt;
	}}
int Xuat(Sinhvien &x){
	int n;
	for(int i=1;i<n;i++){
		cout<<"\nMã Sinh Viên :"<<x.msv;
		cout<<"\nHo tên : "<<x.hoten;
		cout<<"\nNgay Sinh"<<x.ngaysinh;
		cout<<"\nSo dien thoai"<<x.sdt;
		}
	}
int main(){
	int n;
	cout<<"Nhap so sinh vien";
	cin>>n;
	Sinhvien x;
	for(int i=0;i<n;i++){
		Nhap(x);
		Xuat(x);
		}
	

	
	

	
}