#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Nhap so phan tu:"; cin >>n;
    int A[n]; // Tạo mảng A có n phần tử

    // Nhập mảng
    for (int i=0;i<n;i++)
    {
        cout <<"A["<<i<<"]:"; cin >>A[i];
    }

    // Xuất mảng
    cout <<"Output: ";
    for (int i=0;i<n;i++)
    {
        cout <<A[i]<<" ";
    }
}
