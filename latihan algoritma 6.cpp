#include <iostream.h>

#include <conio.h>

 

main (void) {

char pilihan;

int a,b,c;

cout << "\t\t*___MENENTUKAN SISA HASIL BAGI__*\n\n";

do {

cout << "\n\nMasukkan Sembarang Bilangan : "; cin >> a;

cout << "Masukkan Bilangan Pembagi : "; cin >> b;

c = a%b;

 

c=a%b;

 

if(c==0) {

cout << "Tidak Ada" << endl;

} else {

cout << c<< endl;

}

 

cout << "Ketik Y Untuk Melanjutkan, atau T Untuk Berhenti: "; cin >> pilihan;

}

while(pilihan == 'y');

 

}
