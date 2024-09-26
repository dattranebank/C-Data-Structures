#include <iostream>
#include <vector> // Khai báo thư viện vector
using namespace std;

int main()
{
    int n;
    cout <<"Nhap so phan tu:"; cin >>n;
    vector <int> vec; // Tạo vector vec

    // Nhập vector
    int tmp; // Tạo biến tạm để nhập vector
    for (int i=0;i<n;i++)
    {
        cout <<"vec["<<i<<"]:"; cin >>tmp;
        vec.push_back(tmp);
    }

    // Xuất vector
    cout <<"Output: ";
    for (int i=0;i<n;i++)
    {
        cout <<vec[i]<<" ";
    }
}

