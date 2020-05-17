#include <iostream>
#include <conio.h>
using namespace std;
int main(void)
{
	cout<<"zahratul laily\n";
	cout<<"F1B019146\n";
	cout<<"kelompok 25\n";
	
int a[10][10],b[10][10],c[10][10];
int i,j;
cout<<endl<<" Elemenmatriks A : "<<endl;
for(i=0;i<2;i++)
{ for(j=0;j<2;j++){
cout<<" Elemenmatrik A bariske-"<<i+1<<" kolomke-"<<j+1<<": ";
cin>>a[i][j];
}
}
cout<<endl<<" Elemenmatriks B : "<<endl;
for(i=0;i<2;i++)
{ for(j=0;j<2;j++){
cout<<" Elemenmatrik B bariske-"<<i+1<<" kolomke-"<<j+1<<": ";
cin>>b[i][j];
}
}
cout<<endl;
for(i=0;i<2;i++)
{ for(j=0;j<2;j++){
c[i][j]=a[i][j]-b[i][j];
}
}
cout<<" Element matriks C [hasil] : "<<endl;
for(i=0;i<2;i++)
{ for(j=0;j<2;j++){
cout<<" "<<c[i][j];
}
cout<<endl;
}
getch();
}
