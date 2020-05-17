#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang :
	cout<<"                                            SELAMAT DATANG\n";
	cout<<"                                                  DI\n";
	cout<<"                                        Program KUIS Seputar virus Corana\n";
	cout<<"                             =============================================\n";
	cout<<"                                            SilahkanLogin!\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t\t Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<"\t\t\t\t Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (user == "zahra" && pass == "F1B019146")
			{
				cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Ussername dan password anda salah silahkan coba kembali \t\t\n";
				cout<<"\t\t\t Cobalagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"------------------------------------------------------------------\n";
	system("cls");
	{
ulangjwb :
	cout<<"PILIH SALAH SATU JAWABAN  BENAR, ANTARA A, B, C, ATAU D!\n";
	cout<<"==================================================================\n";
	cout<<"1. Virus corana (covid-19) yang menyerang manusia berasal dari negara??\n";
	string pilgan1[50]={"a. china","b. Amerika","c. Indonesi ","d. Italia"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
    cout<<"=================================================================\n";        
cout<<"2. Berikut yang termasuk dalam 10 negara dengan kasus positif terbanyak,kecuali??\n";
    string pilgan2[50]={"a. turki","b. india","c. rusia","d. spanyol"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
    cout<<"===================================================================\n";        
	cout<<"3. Virus corona dibawa oleh hewan...dan menular kepada manusia??\n";
	string pilgan3[50]={"a. burung","b. itik","c. kelelawar","d. ayam"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
	cout<<"====================================================================\n";				
	cout<<"4. Negara yang memiliki kasus Covid-19 terbanyak adalah??\n";
	string pilgan4[50]={"a. China","b. Indonesia","c. Spanyol","d. Amerika"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
    cout<<"========================================================================\n";       
cout<<"5.Berdasarkan hasil penelitian dari National of Allergy and Infectious Diseases,ukuran covid19 adalah??\n";
    string pilgan5[50]={"a. 120-160 nanometer","b. 160-200 nanometer","c. 140-180 nanometer","d. 180-220 nanometer"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"6. COVID-19 bisa masuk melalui anggota anggota tubuh berikut ini, kecuali??\n";
	string pilgan6[50]={"a. mata","b. hidung","c. mulut","d. telinga"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}     
	cout<<"==========================================================================\n";
	cout<<"7. Dibawah ini adalah media penyebaran virus corona , kecuali??\n";
	string pilgan7[50]={"a. bersalaman/bersentuhan tangan","b. percikan batuk dan bersin","c. udara","d. benda-benda padat"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"8. Salah satu upaya psikologis agar daya tahan tubuh kuat untuk menjaga agar tidak tertular COVID-19 adalah??\n";
	string pilgan8[50]={"a. bersenang senang","b. bernyanyi","c. Tidak stres ","d. bersuka cita"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"9. Berapa lama masa inkubasi covid-19??\n";
	string pilgan9[50]={"a. 14 hari","b. 7 hari","c. 3 hari","d. 5 hari"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"10. Yang merupakan gejala umum covid19, kecuali??\n";
	string pilgan10[50]={"a. suhu tubuh meningkat","b. batuk disertai flu","c. sakit kepala","d. pernapasan terganggu"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												

	}		nilai :
					cout<<"=====================================================\n";
					cout<<"PerolehanNilai :"<<endl;
		nilai = benar*10;
		cout<<"    JumlahBenar : "<<benar<<" soal "<<endl;
		cout<<"    JumlahSalah : "<<salah<<" soal "<<endl;
		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai :
			cout<<"==========================="<<endl;
			cout<<"Program Selesai, Terimakasi\n";
			cout<<"==========================="<<endl;
	
}
