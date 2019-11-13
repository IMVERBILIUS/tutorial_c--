#include <iostream>
 using namespace std;

int main() 
{
	int a,b;
	int sum;
	
	cout<<"Please Enter Number \n"; //input angka pertama
	cin>>a;
	cout<<"Masukin angka lagi \n"; //input angka kedua
	cin>>b;
	sum=a+b;
	cout<<"Hasil nya jumlah sama dengan :" <<sum<<endl;  //<<endl=\n
	sum=a-b;	
	cout<<"Hasil nya pengurangan sama dengan :" <<sum<<endl;
	sum=a*b;
	cout<<"Hasil kali nya sama dengan :" <<sum<<endl; 
	sum=a/b;
	cout<<"Hasil bagi nya sama dengan :" <<sum<<endl; 
	sum=a%b;
	cout<<"Hasil nya modulus sama dengan :" <<sum<<endl;  
	return 0;
}
