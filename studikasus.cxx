#include <iostream>
using namespace std;

void bubbleSort(string arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) {
            string temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp ;
            }
        }
    }
}

void quickSort(string arr[], int awal, int akhir) 
{
    int low = awal;
    int high = akhir;
    string pivot = arr[(awal + akhir) / 2];

    do {
        while (arr[low] > pivot)  // > untuk descending
            low++;
        while (arr[high] < pivot) // < untuk descending
            high--;

        if (low <= high) 
        {
            string temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low++;
            high--;
        }
    } while (low <= high);

    if (awal < high)
        quickSort(arr, awal, high);
    if (low < akhir)
        quickSort(arr, low, akhir);
}

int main() {
    int n;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;
    string nama[n];

    cout << "Masukan daftar nama mahasiswa:";
    for (int i = 0; i < n; i++) {
        cin >> nama[i];
    }

    //Bubble Sort
    bubbleSort(nama, n);

    cout << "Hasil pengurutan Ascending ( Bubble Sort ): ";
    for (int i = 0; i < n; i++) {
        cout << nama[i] << endl;
    }

    //Quick Sort 
    quickSort(nama, 0, n - 1);

    cout << "\nHasil pengurutan Descending ( Quick Sort ):";
    for (int i = 0; i < n; i++) {
        cout << nama[i] << endl;
    }
}
