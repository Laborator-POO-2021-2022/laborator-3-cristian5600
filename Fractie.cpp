#include "Fractie.hpp"

Fractie::Fractie(int aa,int bb)
{	
	a=aa;
	b=bb;
}
Fractie::Fractie(const Fractie &obj){
	a=obj.a;
	b=obj.a;
}
Fractie& Fractie::operator=(const Fractie& obj){
	this->a=obj.a;
	this->b=obj.b;
	return *this;
}
Fractie::~Fractie(){
	delete &a;
	delete &b;
}
double Fractie::getValoare(){
	if(b==0)
	{
		cout<<"b=0 !!!!!!";
	}
	else
	{
	
	return (double(a)/(b));
	}
}
double Fractie::getInv(){
	if(a=0)
	{
		cout<<"a=0 !!!!!!";
	}
	else
	return b/a;
}
void Fractie::setdata(int aa,int bb)
{
	a=aa;
	b=bb;
}
float Fractie::getA(){
	return a;
}
float Fractie::getB(){
	return b;
}
Fractie operator +(const Fractie& obj1,const Fractie& obj2){
	Fractie aux(obj1);
	aux.a=obj1.a*obj2.b+obj1.b*obj2.a;
	aux.b=obj1.b*obj2.b;
	return aux;
}
Fractie operator -(const Fractie& obj1,const Fractie& obj2){
	Fractie aux(obj1);
	aux.a=obj1.a*obj2.b-obj1.b*obj2.a;
	aux.b=obj1.b*obj2.b;
	return aux;
}
Fractie operator *(const Fractie& obj1,const Fractie& obj2){
	Fractie aux(obj1);
	aux.a=obj1.a*obj2.a;
	aux.b=obj1.b*obj2.b;
	return aux;
}
Fractie operator /(const Fractie& obj1,const Fractie& obj2){
	Fractie aux(obj1);
	aux.a=obj1.a*obj2.b;
	aux.b=obj1.b*obj2.a;
	return aux;
}
Fractie operator -(const Fractie& obj){
	Fractie aux(obj);
	aux.a=-obj.a;
	aux.b=-obj.b;
	return aux;
}
Fractie& Fractie::operator +=( const Fractie& a){
	this->a=this->a*a.b+this->b*a.a;
	this->b=this->b*a.b;
	return *this;
}
Fractie& Fractie::operator *=( const Fractie& a){
	
	this->a=this->a*a.a;
	this->b=this->b*a.b;
	return *this;
}
Fractie& Fractie::operator -=( const Fractie& a){
	this->a=this->a*a.b-this->b*a.a;
	this->b=this->b*a.b;
	return *this;
}
Fractie& Fractie::operator /=( const Fractie& a){
	
	this->a=this->a*a.b;
	this->b=this->b*a.a;
	return *this;
}
bool Fractie::operator ==( const Fractie& x){
	
	if((this->a/this->b == x.a/x.b))  // && (this->b==x.b))
		return true;
	else 
		return false;
}
bool Fractie::operator !=( const Fractie& x){
	
	if((this->a/this->b != x.a/x.b))
		return true;
	else 
		return false;
}
bool Fractie::operator <( const Fractie& x){
	
	if ((this->a/this->b)<(x.a/x.b))
		return true;
	else 
		return false;
}
bool Fractie::operator >( const Fractie& x){
	
	if ((this->a/this->b)>(x.a/x.b))
		return true;
	else 
		return false;
}
bool Fractie::operator <=( const Fractie& x){
	
	if ((this->a/this->b)<=(x.a/x.b))
		return true;
	else 
		return false;
}
bool Fractie::operator >=( const Fractie& x){
	
	if ((this->a/this->b)>=(x.a/x.b))
		return true;
	else 
		return false;
}
void Fractie::afisare(){
	cout<<endl<<a<<"/"<<b;
}
















