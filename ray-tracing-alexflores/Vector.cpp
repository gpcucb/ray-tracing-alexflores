#include"Vector.h"

Vector::Vector()
{
}

Vector::~Vector()
{
}

Vector Vector::suma(float a, float b, float c)
{
	Vector aux;
	aux.x = x+a;
	aux.y = y+b;
	aux.z = z+c;
	return aux; 
}

Vector Vector::resta(float a, float b, float c)
{
	Vector aux;
	aux.x = x-a;
	aux.y = y-b;
	aux.z = z-c;
	return aux; 
}

float Vector::mod()
{
	float aux= pow(x,2) + pow(y,2) + pow(z,2);
	return sqrt(aux);
}

Vector Vector::prodVec(Vector v) // Producto vectorial
{
	Vector aux;
	aux.x = (y*v.z) - (z*v.y);
	aux.y = (z*v.x) - (x*v.z);
	aux.z = (x*v.y) - (y*v.x);
	return aux;
}

float Vector::prodEsc(Vector v) // Producto escalar
{
	Vector aux;
	aux.x = x*v.x;
	aux.y = y*v.y;
	aux.z = z*v.z;
	return aux.x+aux.y+aux.z;
}

Vector Vector::num_product(float num) // producto vector por un numero
{
	Vector aux;
	aux.x = x*num;
	aux.y = y*num;
	aux.z = z*num;
	return aux;
}

void Vector::mostrar()
{
	cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}