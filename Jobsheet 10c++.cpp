#include <cstdlib>
#include <iostream>

using namespace std; 

int main(int argc,char *argv[]) { 
    cout<<"zahratul laily\n";
	cout<<"F1B019146\n";
	cout<<"kelompok 25\n"; 
	
	char nama [3][3][10];  
	int i,j;  
	for(i=0;i<3;i++)  {   
	for(j=0;j<3;j++)   {    
	
	cout<<"NIM ["<<i+1<<"][ "<<j+1<<"] : ";   
	cin>>nama[i][j];   }   
	
	cout<<endl;  }  
	for(i=0;i<3;i++)  {   
	for(j=0;j<3;j++)   {    
	
	cout<<"NIM ["<<i+1<<"][ "<<j+1<<"] : ";    
	}  
	}  
	cout<<endl;  
	system("PAUSE");  
return EXIT_SUCCESS; 
}
