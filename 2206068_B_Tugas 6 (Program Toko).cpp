#include <iostream>
using namespace std;

int main () {
	char menu;
	char jenis;
	string harga;
	int jumlah;
	int total;
	int tunai;
	int kembalian;
	string nama_menu;
	
	cout << "Menyediakan Makanan dan Minuman"<<endl; 
	cout << "Daftar Menu:" <<endl; 
	cout << "1. Makanan" <<endl; 
	cout << "2. Minuman" <<endl;
	cout << "Pilih Jenis Menu: ";
	cin >> menu;
	
	switch(menu) {
		case '1':
			cout << "-----Menu Makanan-----" <<endl; 
			cout << "1. Mie Rp.7000" <<endl; 
			cout << "2. Nasgor Rp.10000" <<endl;
			cout << "3. Geprek Rp.15000" <<endl;
			cout << "4. Rendang Rp.20000" <<endl;
			cout << "5. Seblak Rp.5000" <<endl;
			cout << "Pilih menu makananan: "; cin >> jenis;
			cout << "Berapa menu yang anda pesan: "; cin >> jumlah;
			
			switch(jenis){
				case '1':
					nama_menu = "Mie";
					total = 7000 * jumlah;
					harga = "Rp.7000";
				break;
				case '2':
					nama_menu = "Nasgor";
					total = 10000 * jumlah;
					harga = "Rp.10000";
				break;
				case '3':
					nama_menu = "Geprek";
					total = 15000 * jumlah;
					harga = "Rp.15000";
				break;
				case '4':
					nama_menu = "Rendang";
					total = 20000 * jumlah;
					harga = "Rp.20000";
				break;
				case '5':
					nama_menu = "Seblak";
					total = 5000 * jumlah;
					harga = "Rp.5000";
				break;
			}
			break;
			
		case '2':
			cout << "-----Menu Minuman-----" <<endl; 
			cout << "1.Jus Rp.7000" <<endl;
			cout << "2.Teh Manis Rp.5000" <<endl;
			cout << "3.Alpukat Rp.10000" <<endl;
			cout << "4.Dawet Rp.6000" <<endl;
			cout << "5.Kopi Rp.5000" <<endl;
			cout << "Pilih Makanan: "; cin >> jenis;
			cout << "Berapa menu yang anda pesan: "; cin >> jumlah;
			
			switch(jenis){
				case '1':
					nama_menu = "Jus";
					total = 7000 * jumlah;
					harga = "Rp.7000";
				break;
				case '2':
					nama_menu = "Teh Manis";
					total = 5000 * jumlah;
					harga = "Rp.5000";
				break;
				case '3':
					nama_menu = "Alpukat";
					total = 10000 * jumlah;
					harga = "Rp.10000";
				break;
				case '4':
					nama_menu = "Dawet";
					total = 6000 * jumlah;
					harga = "Rp.6000";
				break;
				case '5':
					nama_menu = "Kopi";
					total = 5000 * jumlah;
					harga = "Rp.5000";
				break;
			}
			break;
		break;
	}	
		cout << "Uang yang anda bayar: "; cin >> tunai;
		cout << "Menu yang di pilih " <<nama_menu << ", Jumlah pesan " <<jumlah << " dengan harga " <<harga <<" totalnya harga Rp." <<total <<endl; 
		
		kembalian = tunai - total;
		if (tunai < total) {
			cout << "Pembayaran anda kurang" <<endl;
		} else {
			cout << "Kembalian anda: "<<kembalian <<endl;
		}
		
		cout << "Terimakasih telah memesan makanan di toko kami";	
}