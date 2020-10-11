/* Perhitungan Billing Warnet */
/* Rizki Januar Irmansyah */
/* 20051397046 */
/* 2020B */

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()

{
	
	int j1jam, j1menit, j1detik, j2jam, j2menit, j2detik, jumlahdetik, jumlahbayar, selisihjam, selisihmenit, selisihdetik, ulang;
	const int tarif = 5000;
	
	system ("color 0C");
    cout <<"-----Program Billing Warnet Ikyy-Net ----- \n";
    cout <<"------------------------------------------ \n";
	cout << endl;
	
	cout << "Masukan Waktu Awal " << endl;
	cout << "Jam mulai	: "; cin >> j1jam;
	cout << "Menit Mulai	: "; cin >> j1menit;
	cout << "Detik Mulai	: "; cin >> j1detik;
	cout << endl;
	cout << endl;
	
	cout << "Masukan Waktu Akhir " << endl;
	cout << "Jam Akhir	: "; cin >> j2jam;
	cout << "Menit Akhir	: "; cin >> j2menit;
	cout << "Detik Akhir	: "; cin >> j2detik;
	cout << endl;
	cout << endl;
	
	selisihjam=j2jam-j1jam;
	selisihmenit=j2menit-j1menit;
	selisihdetik=j2detik-j1detik;
	
	jumlahdetik = (selisihjam*3600)+(selisihmenit*60)+selisihdetik;
	jumlahbayar = (jumlahdetik*tarif/3600);
	
	
	cout << "Durasi Waktu	: "<<endl;
	cout <<"Jam		: "<<selisihjam<<" Jam\n";
    cout <<"Menit		: "<<selisihmenit<<" Menit\n";
    cout <<"Detik		: "<<selisihdetik<<" Detik\n";
    cout << endl;
    
    cout<<"\nTarif		: Rp. 5000.- /Jam ";
    cout << endl;
    
	cout<<"Total Biaya	: Rp. " << jumlahbayar << ",-" << endl;
	cout<<endl;
	cout <<"-----Terima Kasih dan Selamat Datang Kembali----- \n";
	
	
	return 0;
}

