#include <iostream>

using namespace std;

int main()
{
	cout<<"zahratul laily\n";
	cout<<"F1B019146\n";
	cout<<"kelompok 25\n";
	
	string NIM[5];
	
	cout<< "	Masukkan NIM AnggotaKelompok 25" <<endl;
	cout<< " Rio Syarifuddin : ";
	cin>> NIM[0];
	cout<< " RismaPrasastiAdithama : ";
	cin>> NIM[1];
	cout<< " RiyanFathurrahman : ";
	cin>> NIM[2];
	cout<< " RohulIman : ";
	cin>> NIM[3];
	cout<< " ZahratulLaily : ";
	cin>> NIM[4];
	cout<<endl;
	
	cout<< "	Daftar NIM AnggitaKelompok 25";
	cout<< NIM[0] << " : Rio Syarifuddin" <<endl;
	cout<< NIM[1] << " : RismaPrasastiAdithama" <<endl;
	cout<< NIM[2] << " : RiyanFathurrahman" <<endl;
	cout<< NIM[3] << " : RohulIman" <<endl;
	cout<< NIM[4] << " : Zahratullaily" <<endl;

	
	return 0;
}
