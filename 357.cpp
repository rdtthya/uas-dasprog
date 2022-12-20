#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    
	int arr[100][100], jumlahBaris, jumlahKolom, i, j, baris, kolom;
	
	cout<< "==============================================\n";
	cout<< "Program Bilangan Yang Habis Dibagi 3, 5, dan 7\n";
	cout<< "==============================================\n";
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

    cout << "Hasil input nilai : " << endl;

    for(i = 0; i < jumlahBaris ; i++){
    for(j = 0; j < jumlahKolom; j++){
        cout << setw(3) << arr[i][j] << " ";
    }
    cout << endl;
    }

    cout << "\nHasil bilangan yang habis dibagi 3,5,7 : " << endl;

    for(i = 0; i < jumlahBaris ; i++){
    for(j = 0; j < jumlahKolom; j++){
        if(arr[i][j] % 3 == 0 || arr[i][j] % 5 == 0 || arr[i][j] % 7 == 0){
        cout << setw(3) << arr[i][j] << " ";
        }
    }
    cout << endl;
    }

    
    cout << endl;
    return 0;
}
