// Kelompok 2
// Nama  : 	Ayu Fibri Suryanti (2217051013)
//			Afina Zahra Choiirunnisa (2217051025)
//			Septia Rosalia (2257051018)	

// Kelas : 	D

// Judul : 	Penjualan Hijab

#include<iostream>
using namespace std;

void struk(int disc,int tot){
		int c,i;
		cout << "Masukkan Jumlah Cetak = ";
		cin >> c;
	
		for (i=1 ; i<=c ; i++) {
				cout << "==================== AAS BEAUTY HIJAB ====================" << endl;
				cout << "Total Belanja = Rp." << tot << endl;
				cout << "==========================================================" << endl;
				
				int tunai,kembali;
			cout << "Tunai = ";
			cin >> tunai;
		cout << endl;
		kembali = (tunai-tot);
		cout << "Kembalian = ";
		cout << kembali << endl;
		cout << endl;
		cout << "Anda Hemat = " << disc << endl;
		cout << "===========================================================================" << endl;
		cout << "Tanggal: 16 Oktober 2022                                    Waktu: 16:33:09" << endl;
		cout << "===========================================================================" << endl;
		cout << "              - TERIMA KASIH TELAH BELANJA DI AAS BEAUTY HIJAB -                            " << endl;
		cout << "===========================================================================" << endl;
			}
		
}

int main (){
	int Paris_Premium = 25000;
	int Bella_Square = 15000;
	int Pashmina_Plisket = 35000;
	int Pashmina_Babydoll = 35000;
	int Pashmina_Silk = 50000;
	int Pashmina_Crinkle = 30000;
	int Hijab_Bergo = 20000;
	int Hijab_Syari = 70000;
	int Hijab_Chifon = 85000;
	int Hijab_Voal_Motif = 30000;
	
	int JUMLAH,Hasil, total;
	int sum= 0;
	int y,hb,diskon;
	float x = 0.2;
	string lanjut,cetak;
	
	 
	cout << "===========================================================================" << endl;
	cout << "|                    		 AAS BEAUTY HIJAB                         | " << endl;
	cout << "|     		 JALAN MENUJU CUMLAUDE KELURAHAN IPK RT/RW 4/00           | " << endl;
	cout << "|        	         telp :0858 yang lain kapan kapan                 | " << endl;
	cout << "===========================================================================" << endl;
	cout << " KODE BARANG | NAMA BARANG                        | HARGA BARANG   |" <<endl;
	cout << "===========================================================================" << endl;
	cout << " 1           | Paris Premium                      | Rp. 25.000     | " << endl;
    cout << " 2           | Bella Square                       | Rp. 15.000     | " << endl;
    cout << " 3           | Pashmina Plisket                   | Rp. 35.000     | " << endl;
    cout << " 4           | Pashmina Babydoll                  | Rp. 35.000     | " << endl;
    cout << " 5           | Pashmina Silk	                  | Rp. 50.000     | " << endl;
    cout << " 6           | Pashmina Crinkle                   | Rp. 30.000     | " << endl;
    cout << " 7           | Hijab Bergo                        | Rp. 20.000     | " << endl;
    cout << " 8           | Hijab Syar'i                       | Rp. 70.000     | " << endl;
    cout << " 9           | Hijab Chifon                       | Rp. 85.000     | " << endl;
    cout << " 10          | Hijab Voal Motif                   | Rp. 30.000     | " << endl;
	cout << "===========================Happy Shopping====================================" << endl;
	cout << endl;
	// Deklarasi Menampung atau menyimpan kalimat
	string barang [11] = {" ","Paris Premium", "Bella Square", "Pashmina Plisket", "Pashmina Babydoll", "Pashmina Silk", "Pashmina Crinkle", "Hijab Bergo", "Hijab Syar'i", "Hijab Chifon", "Hijab Voal Motif"};

	do {
		cout << "Masukkan Kode Barang = "; 
		cin >> y;
		cout<<"Anda Membeli "<<barang [y]<<endl;
		cout<<"Masukkan Jumlah Pembelian = ";
		cin>>JUMLAH;
		
			switch (y) {
		case 1 : hb = Paris_Premium;
		 cout << "Paris Premium";
		break;
		case 2 : hb = Bella_Square;
		 cout << "Bella Square";
		break;
		case 3 : hb = Pashmina_Plisket;
		 cout << "Pashmina Plisket";
		break;
		case 4 : hb = Pashmina_Babydoll;
		 cout << "Pashmina Babydoll";
		break;
		case 5 : hb = Pashmina_Silk;
		 cout << "Pashmina Silk";
		break;
		case 6 : hb = Pashmina_Crinkle;
		 cout << "Pashmina Crinkle";
		break;
		case 7 : hb = Hijab_Bergo;
		 cout << "Hijab Bergo";
		break;
		case 8 : hb = Hijab_Syari;
		 cout << "Hijab Syari";
		break;
		case 9 : hb = Hijab_Chifon;
		 cout << "Hijab Chifon";
		break;
		case 10 : hb = Hijab_Voal_Motif;
		 cout << "Hijab Voal Motif";
		break;
		default :
		cout << " ";
}
		cout << endl;
		int sum = hb*JUMLAH ;
		total += sum;
		cout << "Jumlah Total Belanja = Rp. " << sum << endl;
			cout<<"Anda Membeli "<<barang[y]<<" Sejumlah "<<JUMLAH<<" pcs";
		cout<<endl; 
		
		cout<<  endl;
		
		if (y>=1&&y<=10) {
		
			cout<<endl<<"Apakah Anda Ingin Melanjutkan Belanja (y/n)= ";
			cin>>lanjut;
		}else {
			cout<<"Nomor yang anda masukkan salah";
		}
	} while(lanjut=="y");
		
		cout<<endl; 
		
		cout<<  endl;
		
		
		cout << "Total Yang Harus Dibayar = " << total << endl;
		cout << endl;
	
		if (total >=50000){
			cout << "Anda Mendapat Potongan Harga 20% Karena Anda Belanja Lebih Dari Rp.50000" << endl;
			cout << endl;
			diskon = total*x;
			total = total - diskon;
			cout << "Harga Setelah Diskon = " << total;
			
			cout << endl;
		}
		cout << endl;
		
	cout << "Apakah anda ingin mencetak struk pembelian? (y/n) = ";
	cin >> cetak;
	cout<< endl;
	
	if (cetak == "y"){
		struk(diskon,total);
		}
		
	return 0;
}
