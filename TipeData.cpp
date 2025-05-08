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

	std::cout << var_Tulisan << std::endl;

	return 0;
}
