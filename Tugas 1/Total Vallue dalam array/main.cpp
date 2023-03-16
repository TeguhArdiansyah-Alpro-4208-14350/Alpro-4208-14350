#include <iostream>
//soal no.4 Total vallue dalam array
using namespace std;

int main()
{
    int arr[20], total = 0;

    cout << "Masukkan 20 angka: " << endl;

    for(int i = 0; i < 20; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }

    cout << "Total nilai elemen dalam array: " << total << endl;

    return 0;
}
