
#include <bit>
using namespace std;
struct sinhvien
    {
        char hoten[20];
        int mssv;
        char lop[10];
        int namsinh;
    };
int xuat(sinhvien sv[],int n)
{  
    for(int i=0;i<n;i++)
    {
        cout<<"\t--Sinh vien thu"<<i<<"--\n";
        cout<<"\tHo ten Sinh vien:"<<sv[i].hoten<<endl;
        cout<<"\tMSSV:"<<sv[i].mssv<<endl;
        cout<<"\tNam sinh:"<<sv[i].namsinh<<endl;
        cout<<"\tLop:"<<sv[i].lop<<endl;
    }
}
 
void nhap(sinhvien sv[],int n)
{  
    for(int i=0;i<n;i++)
    {
        cout<<"\t--Nhap vao thong tin sinh vien thu "<<i<<"--\n";
        cout<<"\tNhap vao ho ten sinh vien : ";
        fflush(stdin);
        gets(sv[i].hoten);
        cout<<"\tNhap vao MSSV : ";
        cin>>sv[i].mssv;
        cout<<"\tNhap vao nam sinh cua sinh vien : ";
        cin>>sv[i].namsinh;
        cout<<"\tNhap vao lop cho sinh vien : ";
        fflush(stdin);
        gets(sv[i].lop);
    }
}
 
int main()
{
   
    sinhvien sv[10];
    int n;
    cout<<"\tNhap vao so luong sinh vien:";
    cin>>n;
    nhap(sv,n);
    xuat(sv,n);
}