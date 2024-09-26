#include <iostream>
#include <vector> // Khai báo thư viện vector
using namespace std;

void input_vector(vector <int>& vec, int n)
{
    int tmp; // Tạo biến tạm để nhập vector
    for (int i=0;i<n;i++)
    {
        cout <<"vec["<<i<<"]:"; cin >>tmp;
        vec.push_back(tmp);
    }
}

void output_vector(const vector <int>& vec, int n)
{
    for (int i=0;i<n;i++)
    {
        cout <<vec[i]<<" ";
    }
}

int main()
{
    int n;
    cout <<"Nhap so phan tu:"; cin >>n;
    vector <int> vec; // Tạo vector vec

    // Nhập vector
    input_vector(vec,n);
    // Xuất vector
    cout <<"Output: ";
    output_vector(vec,n);
}
