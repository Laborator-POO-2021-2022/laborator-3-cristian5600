#include "Fractie.hpp"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Fractie n(3,5);
	Fractie m(7,8);
	Fractie z(6,7);
	Fractie x(10,3);
	Fractie y(6,10);
	n.afisare();
	cout<<" ";
	m.afisare();
	cout<<endl;
	m=operator+(m,n);
	m.afisare();
	cout<<endl;
	m=m-n;
	m.afisare();
	
	
	cout << endl;
	z.afisare();
	cout<<"="<<z.getValoare();
	z+=n;
	z.afisare();
	cout<<"="<<z.getValoare();
	z-=n;
	z.afisare();
	cout<<"="<<z.getValoare();
	
	
	cout << endl;
	z.afisare();
	cout<<"="<<z.getValoare();
	z*=n;
	z.afisare();
	cout<<"="<<z.getValoare();
	z/=n;
	z.afisare();
	cout<<"="<<z.getValoare();
	
	
	cout << endl;
	z.afisare();
	cout<<"="<<z.getValoare();
	z*=n;
	z.afisare();
	cout<<"="<<z.getValoare();
	z/=n;
	z.afisare();
	cout<<"="<<z.getValoare();
	
	cout<<endl;
	cout<<endl<<"n=";
	n.afisare();
	cout<<endl<<"y ";
	y.afisare();
	cout<<endl<<"x ";
	x.afisare();
	cout<<endl;
	if(n==y)
		cout<<endl<<"y=n";
	if(n>=y)
		cout<<endl<<"n>=y";
	if(n<x)
		cout<<endl<<"n<x";
	if(x>y)
		cout<<endl<<"x>y";
	
	
	
	
	
	
	return 0;
}
