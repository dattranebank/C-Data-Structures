#include <iostream>
using namespace std;

void input_array(int A[], int n)
{
    for (int i=0;i<n;i++)
    {
        cout <<"A["<<i<<"]:"; cin >>A[i];
    }
}

void output_array(int A[], int n)
{
    for (int i=0;i<n;i++)
    {
        cout <<A[i]<<" ";
    }
}

int main()
{
    int n;
    cout <<"Nhap so phan tu:"; cin >>n;
    int A[n]; // Tạo mảng A có n phần tử

    // Nhập mảng
    input_array(A,n);
    // Xuất mảng
    cout <<"Output: ";
    output_array(A,n);
}
