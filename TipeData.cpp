#include <iostream> 

int main() {
	// Tipe Data Boolean (bool)
	std::cout << "==================" << std::endl;
	std::cout << "TIPE DATA: BOOLEAN" << std::endl;
	std::cout << "==================" << std::endl << "\n";

	int var_Angka; 
	bool var_Hasil_Bool;

	var_Hasil_Bool = true;
	std::cout << "Silahkan Masukkan Nilai : "; std::cin >> var_Angka; //input user

	var_Hasil_Bool = var_Angka > 10; //perbandingan
	std::cout << "Hasil Perbandingan : " << var_Hasil_Bool << std::endl << "\n"; //output hasil perbandingan

	/*----------------------------------------------*/
	
	//Tipe Data Character (char)
	std::cout << "===========================" << std::endl;
	std::cout << "TIPE DATA: CHARACTER (CHAR)" << std::endl;
	std::cout << "===========================" << std::endl << "\n";
	
	char var_Karakter;
	var_Karakter = 'A'; //input karakter (Variabel Karakter hanya bisa memuat 1 karakter)

	std::cout << "Masukkan 1 Karakter Huruf   : "; std::cin >> var_Karakter; //input user
	std::cout << "Karakter yang Anda Masukkan : " << var_Karakter << std::endl << "\n"; //output karakter

	/*----------------------------------------------*/

	//Tipe Data Integer (int)
	std::cout << "===========================" << std::endl;
	std::cout << "TIPE DATA: INTEGER (INT)" << std::endl;
	std::cout << "===========================" << std::endl << "\n";

	int var_Integer_Pertama;
	int var_Integer_Kedua;
	int var_Hasil_Integer;

	var_Integer_Pertama = 0; 
	var_Integer_Kedua = 0;

	std::cout << "Masukkan Angka Bulat Pertama : "; std::cin >> var_Integer_Pertama;
	std::cout << "Masukkan Angka Bulat Kedua   : "; std::cin >> var_Integer_Kedua;

	var_Hasil_Integer = var_Integer_Pertama + var_Integer_Kedua; //perhitungan
	
	std::cout << "Jumlah dari " << var_Integer_Pertama << " + " << var_Integer_Kedua << " = " << var_Hasil_Integer << std::endl << "\n"; //output hasil perhitungan

	/*----------------------------------------------*/

	//Tipe Data Float (float)
	std::cout << "==============================" << std::endl;
	std::cout << "TIPE DATA: FLOAT POINT (FLOAT)" << std::endl;
	std::cout << "==============================" << std::endl << "\n";

	float var_Float_Pertama, var_Float_Hasil;
	const float var_Float_Kedua = 3.14;

	std::cout << "Masukkan Jumlah Jari-Jari = "; std::cin >> var_Float_Pertama;
	var_Float_Hasil = (var_Float_Pertama * var_Float_Kedua) * 2;

	std::cout << "Keliling Lingkaran = " << var_Float_Hasil << std::endl << "\n"; //output hasil perhitungan 

	/*----------------------------------------------*/

	//Tipe Data Double (double)
	std::cout << "=================" << std::endl;
	std::cout << "TIPE DATA: DOUBLE" << std::endl;
	std::cout << "=================" << std::endl << "\n";

	double var_Double1_p, var_Double2_Jari, var_Double3_Hasil;

	var_Double1_p = 3.14;

	std::cout << "Masukkan Jari-Jari Lingkaran : "; std::cin >> var_Double2_Jari;

	var_Double3_Hasil = var_Double2_Jari * (var_Double2_Jari * var_Double1_p);
	std::cout << "Luas Dari Lingkaran = " << var_Double3_Hasil << std::endl << "\n"; //output hasil perhitungan

	/*----------------------------------------------*/

	//Tipe Data string (string)
	std::cout << "=================" << std::endl;
	std::cout << "TIPE DATA: STRING" << std::endl;
	std::cout << "=================" << std::endl << "\n";

	std::string var_Tulisan = "Halo. Nama Saya Rizky Khapidsyah, Siapakah nama kamu?";

	std::cout << var_Tulisan << std::endl << "\n";

	/*----------------------------------------------*/

	//UKURAN MASING-MASING TIPE DATA
	//Sumber: belajarcpp.com
	std::cout << "==============================" << std::endl;
	std::cout << "UKURAN MASING-MASING TIPE DATA" << std::endl;
	std::cout << "==============================" << std::endl << "\n";

	std::cout << "--> Integer " << std::endl;
	std::cout << "Ukuran Memori dari int : " << sizeof(int) << std::endl;
	std::cout << "Ukuran Memori dari signed int : " << sizeof(signed int) << std::endl;
	std::cout << "Ukuran Memori dari signed int : " << sizeof(signed short int) << std::endl;
	std::cout << "Ukuran Memori dari signed int : " << sizeof(signed long int) << std::endl;
	std::cout << "Ukuran Memori dari signed int : " << sizeof(signed long long int) << std::endl;
	std::cout << "Ukuran Memori dari unsigned int : " << sizeof(unsigned int) << std::endl;
	std::cout << "Ukuran Memori dari unsigned int : " << sizeof(unsigned short int) << std::endl;
	std::cout << "Ukuran Memori dari unsigned int : " << sizeof(unsigned long int) << std::endl;
	std::cout << "Ukuran Memori dari unsigned int : " << sizeof(unsigned long long int) << std::endl;

	std::cout << std::endl << "--> Floating Point " << std::endl;
	std::cout << "Ukuran Memori dari float : " << sizeof(float) << std::endl;

	std::cout << std::endl << "--> Double Floating Point " << std::endl;
	std::cout << "Ukuran Memori dari Double : " << sizeof(double) << std::endl;
	std::cout << "Ukuran Memori dari Long Double : " << sizeof(long double) << std::endl;

	std::cout << std::endl << "--> Boolean " << std::endl;
	std::cout << "Ukuran Memori dari Boolean : " << sizeof(bool) << std::endl;

	std::cout << std::endl << "--> Character " << std::endl;
	std::cout << "Ukuran Memori dari Char : " << sizeof(char) << std::endl;
	std::cout << "Ukuran Memori dari Singned Char : " << sizeof(signed char) << std::endl;
	std::cout << "Ukuran Memori dari Unsigned Char : " << sizeof(unsigned char) << std::endl;
	std::cout << "Ukuran Memori dari char16_t : " << sizeof(char16_t) << std::endl;
	std::cout << "Ukuran Memori dari char32_t : " << sizeof(char32_t) << std::endl;
	std::cout << "Ukuran Memori dari wchar_t : " << sizeof(wchar_t) << std::endl;

	std::cout << std::endl << "--> String " << std::endl;
	std::cout << "Ukuran Memori dari String: " << sizeof(std::string) << std::endl;

	std::cout << std::endl << "--> Pointer Null " << std::endl;
	std::cout << "Ukuran Memori dari decltype(nullptr): " << sizeof(decltype(nullptr)) << std::endl;

	return 0;
}
