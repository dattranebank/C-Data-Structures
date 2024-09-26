#include <iostream>
#include <vector> // Khai báo thư viện vector
using namespace std;

int main()
{
    int n;
    cout <<"Nhap so phan tu:"; cin >>n;
    vector <int> vec(n); // Tạo vector vec có n phần tử

    // Nhập vector
    for (int i=0;i<n;i++)
    {
        cout <<"vec["<<i<<"]:"; cin >>vec[i];
    }

    // Xuất vector
    cout <<"Output: ";
    for (int i=0;i<n;i++)
    {
        cout <<vec[i]<<" ";
    }
}

