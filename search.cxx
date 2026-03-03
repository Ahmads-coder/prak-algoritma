#include <iostream>
using namespace std;
/*
int main(){
	int angka[] = {10, 3, 6, 2, 1, 7, 8};
	int length = sizeof(angka)/sizeof(*angka);
	int dtCari, hasilCari;
	cout << "Data Tersedia : " << endl;
	for (int a = 0; a < length; a++){
	cout  << "index ke- "<< a << " : " << angka[a] << endl;	
	} 
	cout  << "Data yang dicari : ";
	cin >> dtCari;
	for (int b = 0; b < length; b {
		if(dtCari == angka[b]){
			hasilCarii++;
		}
	}
	if(hasil == 0) {
		cout << "Data tidak ditemukan" << endl;
	} else { 
		cout << "Data" << dtCari << "ditemukan di :" << endl;
		for (int c = 0; c < lenght; c++){
			if(dtCari == angka[c]){
				cout << "Index ke-" << c << endl;
			}
		}
	}
}
*/

#include <iostream>
using namespace std;

int main() {
	//cara 1 no urut no sentinel
	/*
    int X[10] = {20, 50, 10, 30, 90, 60, 70, 80, 40, 100};
    bool found = false;
    int i = 0, nilaiCari;

    cout << "Nilai yang dicari = ";
    cin >> nilaiCari;

    while ((i < 10) && (!found)) {
        if (X[i] == nilaiCari)
            found = true;
        else
            i = i + 1;
    }

    if (found)
        cout << nilaiCari << " ditemukan pada index array ke-" << i << endl;
    else
        cout << nilaiCari << " tidak ada dalam array tersebut" << endl;
        */
        
        //Belum urut sentinel
        /*
	int X[11] = {20, 50, 10, 30, 90, 60, 70, 80, 40, 100};
	int i, nilaiCari;

	cout << "Nilai yang dicari = "; 
	cin >> nilaiCari;

	X[10] = nilaiCari;   // sentinel
	i = 0;

	while(X[i] != nilaiCari)
    i = i + 1;

	if(i > 9)
		cout << "tidak ada " << nilaiCari << " dalam Array" << endl;
	else
		cout << nilaiCari << " ditemukan dalam Array pada index ke-" << i << endl;
		*/
		
		
}
