#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std; 

int main(int argc, char *argv[]) {   
cout<<"zahratul laily\n";
	cout<<"F1B019146\n";
	cout<<"kelompok 25\n";
	  
	int a[2][2],b[2][2],m,n;     
	for(m=0;m<2;m++)     {     
	for(n=0;n<2;n++)     {     
cout<<"masukkannilaimatriks a("<<m<<","<<n<<"):";     
cin>>a[m] [n];     
		}     
		}     
	for(m=0;m<2;m++)     {     
	for(n=0;n<2;n++)     {     
cout<<"masukkannilaimatriks b("<<m<<","<<n<<"):";     
cin>>b[m] [n];     
		}         
		}     
cout<<"HasilPerkalianMatriksaxb  = \n";     
	for(m=0;m<2;m++)     {     
	for(n=0;n<2;n++)     { 
cout<<setw(3)<<" "<<(a[m][0]*b[0][n]+a[m][1]*b[1][n]);     
		}     
cout<<"\n";     
		} 
		
system("PAUSE"); 
return EXIT_SUCCESS;

}
