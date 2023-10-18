#include <iostream>
using namespace std;

int main(){
	int a;
	int n1,n2, product;
float length, square;
	while(true){
	
cout<<" Menu \n 1. Tonying\n 2. Tyron\n";	
cin>>a;

if (a==1){

cout<<"MULTIPLY TWO INTEGERS\n";
cout<<"enter num1:"	;
cin>>n1;
cout<<"enter num2:"	;
cin>>n2;
product= n1*n2;

cout<<n1<< "*"<<n2<<"="<<product<<endl;
system("pause");
system("cls");
	
}

if(a==2){
	
cout<<"FIND AREA OF SQUARE WITH THE GIVEN LENGTH/SIDE \n";	
cout<<"ENTER LENGTH/SIDE: "	;
cin >> length;
square = length * length;

cout << "Area of Square is with the given length " << length << " is equals to " << square << "\n";
system("pause");
system("cls");
	
}
}
	
}
