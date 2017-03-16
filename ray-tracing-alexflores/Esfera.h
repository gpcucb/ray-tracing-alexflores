#ifndef ESFERA_H
#define ESFERA_H
#include"Vector.h"
#include"Rayo.h"
using namespace std;
class Esfera{
public:
	Vector pos;
	float radio;

public:
	Esfera(Vector pos, float radio);
    ~Esfera();
	void interseccion(Rayo rayo);
};

#endif