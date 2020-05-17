#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std; 

main(){
cout<<"zahratul laily\n";
	cout<<"F1B019146\n";
	cout<<"kelompok 25\n";
	 
	int A[10][10],b,c,baris,kolom; 
	 char pil; 
	
	do { 
	cout<<" ==========PROGRAM TRANSPOSE MATRIKS========= "<<endl; 
	cout<<"JumlahBaris : "; 
	cin>>baris; 
	
	cout<<"JumlahKolom : "; 
	cin>>kolom; cout<<endl; 
		for (b=0;b<baris;b++) {
		for (c=0;c<kolom;c++) { 
		
cout<<"Matriks["<<b+1<<","<<c+1<<"] = "; 
cin>>A[b][c]; 
} 
} 
cout<<endl<<endl; 
cout<<"MatriksPertama : "<<endl<<endl; 

for (b=0;b<baris;b++) { 
for (c=0;c<kolom;c++) { 
		
cout<<" "<<A[b][c]<<" "; } 

cout<<endl<<endl; } 
cout<<" Matriks Transpose : "<<endl<<endl; 
		
for (b=0;b<kolom;b++) { 
for (c=0;c<baris;c++) { 
cout<<" "<<A[c][b]<<" "; } cout<<endl; cout<<endl; } 

getch(); 
		
		
cout<<" InginMengulang Program ? (Y/N) : "; 
cin>>pil; } 

while(pil=='Y'||pil=='y'); 
}
