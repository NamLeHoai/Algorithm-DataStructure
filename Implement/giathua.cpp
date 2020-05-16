#include <iostream>
using namespace std;

int giathua(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * giathua(n - 1);
}

int main()
{
    int n;
    cout << "nhap vao so can tinh gia thua n: " << endl;
    cin >> n;
    cout << giathua(n) << endl;
    return 0;
}