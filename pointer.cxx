#include <iostream>
using namespace std;
#define debug(x) cout << #x << " => " << (x) << endl;

void penjumlahan(int angka1, int angka2, int *hasil);

int main() {
  // tipe_data nama_variable = value;
  int num_var = 10;
  debug(num_var);

  int *num_ptr = &num_var;
  debug(num_ptr);
  debug(&num_var);

  // ubah lewat num_var
  num_var = 18;
  debug(num_var);
  debug(*num_ptr);

  cout << "ubah dari pointer: \n";
  *num_ptr = 20;

  // num_ptr = 18
  *num_ptr = 20;

  debug(num_var);
  debug(*num_ptr);

  int angka1, angka2, hasil;
  angka1 = 10;
  angka2 = 18;
  debug(hasil);
  penjumlahan(angka1, angka2, &hasil);
  cout << "output dari main: ";
  debug(hasil);

  int array[5] = {10, 20, 30, 40, 50};

  int *array_ptr = array;
  debug(*(array + 4));
  debug(array[4]);
  debug(*array + 4);
}

void penjumlahan(int angka5, int angka6, int *hasil) {
  *hasil = angka5 + angka6;
  cout << "\noutput dari penjumlahan: ";
  debug(*hasil);
}
