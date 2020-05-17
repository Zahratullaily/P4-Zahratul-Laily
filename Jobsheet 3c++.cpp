#include<iostream>
#include<conio.h>
using namespace std;
int i,x;
int matriks_A[2][2], matriks_B[2][2], matriks_C[2][2];
char ulang;
main()
{
	cout<<"zahratul laily\n";
	cout<<"F1B019146\n";
	cout<<"kelompok 25\n";
cout<< "\nPenjumlahan 2 Matriks \n\n";
do{
//Input data matriks A
cout<< "\nDatamatriks A \n"; for(i=1; i<3; i++)
{ for(x=1; x<3; x++)
{ cout<< "["<<i<<"]["<<x<<"] : "; cin>>matriks_A[i][x];
}
}
cout<< "\n.__________________________________.\n";
//Input data matriks B
cout<< "\nDatamatriks B \n"; for(i=1; i<3; i++)
{
for(x=1; x<3; x++)
{
cout<< "["<<i<<"]["<<x<<"] : ";
cin>>matriks_B[i][x];
}}
cout<< "\n.__________________________________.\n";
//Output hasilpenjumlahanMatriks A + Matriks B
cout<< "\nMatriks A + Matriks B : "<<endl;
for(i=1; i<3; i++)
{
for(x=1; x<3; x++)
{ matriks_C[i][x]=matriks_A[i][x]+matriks_B[i][x];
cout<<"\t"<<matriks_C[i][x];
}
cout<<endl;
}
cout<< "\n.__________________________________.\n";
cout<< "\nHitunglagi ? [y/t] : ";cin>>ulang;
}while(ulang!='t');
cout<< "\n\nTerimaKasih \n\n"<<endl;
getch();
}
