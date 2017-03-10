#ifndef CAMARA_H
#define CAMARA_H
#include"Vector.h"
#include<math.h>
using namespace std;
class Camara{
public:
	Vector e; // vector
	Vector center; // vector
	Vector up; // vector
	float fov;
	float df;

public:
	Camara(Vector e, Vector center, Vector up, float fov, float df);
    ~Camara();
	Vector vectorW();
	Vector vectorU(Vector w);
	Vector vectorV(Vector w, Vector u);
	Vector calcular_dir_rayo(int i, int j, float nx, float ny);

};

#endif