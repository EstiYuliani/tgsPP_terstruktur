#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// DEKLARASI VARIABEL
	double a[3][5]={{4,4,5,3,3},{3,3,4,2,3},{5,4,2,2,2}};
		
	double w[5]={5,3,4,4,2};
	double ha1,ha2,ha3;
	
	// SETTING PRESISI DESIMAL
	cout.setf(ios::fixed);cout.setf(ios::showpoint);cout.precision(4);
	
	// MENAMPILKAN NILAI
	cout << "MATRIKS X :"<<endl;
	for(int i=0;i<3;i++)
		for(int j=0;j<5;j++)
			cout<< a[i][j] <<" | " ;
			

   	

	
