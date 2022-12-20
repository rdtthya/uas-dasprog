#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
	int arr[100][100], jumlahBaris, jumlahKolom, i, j, baris, kolom;
	
	cout<< "=======================================\n";
	cout<< "Program Mencetak Matrix Transpos\n";
	cout<< "=======================================\n";
	cout<< "Nama  : Radithya Dwi Santoso \n";
	cout<< "Nim   : 1227050108\n";
	cout<< "Kelas : Informatika22 - C\n\n";

    cout<<"Input jumlah baris: "; cin>>jumlahBaris;
    cout<<"Input jumlah kolom: "; cin>>jumlahKolom;
    cout << endl;

    for(i = 0; i < jumlahBaris; i++){
        for(j = 0; j < jumlahKolom; j++){
            cout << "Baris " <<i+1<<", kolom "<<j+1<< " = ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << "Hasil matriks: " << endl;

    for(i = 0; i < jumlahBaris ; i++){
    for(j = 0; j < jumlahKolom; j++){
        cout << setw(3) << arr[i][j] << " ";
    }
    cout << endl;
    }

    baris = jumlahBaris;
    kolom = jumlahKolom;

    jumlahKolom = baris;
    jumlahBaris = kolom;

    cout << "\nMengubah kolom jadi baris dan baris jadi kolom: " << endl;

    for(i = 0; i < jumlahBaris ; i++){
    	for(j = 0; j < jumlahKolom; j++){
        cout << setw(3) << arr[j][i] << " ";
    }
    cout << endl;
    }
	return 0;
}
