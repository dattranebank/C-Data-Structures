#include <iostream>
#include <vector> // Khai báo thư viện vector
using namespace std;

vector <int> find_max_min_value(vector <int>& vec, int n)
{
    int minvalue=vec[0];
    int maxvalue=vec[0];
    for (int i=1;i<n;i++)
    {
        if (minvalue>vec[i]) minvalue=vec[i];
        if (maxvalue<vec[i]) maxvalue=vec[i];
    }

    vector <int> vec1; // Tạo vector để return cho hàm vector
    vec1.push_back(minvalue);
    vec1.push_back(maxvalue);
    return vec1;

}

int main()
{
    int n;
    cout <<"Nhap so phan tu:"; cin >>n;
    vector <int> vec(n); // Tạo vector vec

    // Nhập vector
    for (int i=0;i<n;i++)
    {
        cout <<"vec["<<i<<"]:"; cin >>vec[i];
    }

    vector <int> vec1; // Tạo vector để chứa giá trị từ hàm vector
    vec1=find_max_min_value(vec,n);

    cout <<"Min value:"<<vec1[0]<<endl;
    cout <<"Max value:"<<vec1[1];
}


