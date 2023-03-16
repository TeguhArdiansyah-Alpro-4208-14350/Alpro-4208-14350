#include <iostream>
//soal No.3 rata-rata element array
using namespace std;

int main()
{
    int arr[20];
    float total = 0, rata2;

    cout << "Masukkan 20 angka: " << endl;

    for(int i = 0; i < 20; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }

    rata = total / 20;

    cout << "Rata-rata nilai elemen dalam array: " << rata2 << endl;

    return 0;
}
