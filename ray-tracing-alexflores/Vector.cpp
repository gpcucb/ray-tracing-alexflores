#include"Vector.h"

Vector::Vector()
{
}

Vector::~Vector()
{
}

Vector Vector::suma(int x, int y, int z)
{
	Vector aux;
	aux.a = a+x;
	aux.b = b+y;
	aux.c = c+z;
	return aux; 
}

Vector Vector::resta(int x, int y, int z)
{
	Vector aux;
	aux.a = a-x;
	aux.b = b-y;
	aux.c = c-z;
	return aux; 
}

void Vector::mostrar()
{
	cout<<"("<<a<<","<<b<<","<<c<<")"<<endl;
}