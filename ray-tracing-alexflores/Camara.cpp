#include"Camara.h"

Camara::Camara(Vector e, Vector center, Vector up, float fov, float df)
{
	this->e=e;
	this->center=center;
	this->up=up;
	this->fov=fov;
	this->df=df;
}

Camara::~Camara()
{
}

Vector Camara::vectorW()
{
	Vector d,w;
	d = e.resta(center.x,center.y,center.z);
	w.x = d.x/d.mod();
	w.y = d.y/d.mod();
	w.z = d.z/d.mod();
	return w;
}

Vector Camara::vectorU(Vector w)
{
	Vector prod,u;
	prod = up.prodVec(w);
	u.x = prod.x/prod.mod();
	u.y = prod.y/prod.mod();
	u.z = prod.z/prod.mod();
	return u;
}

Vector Camara::vectorV(Vector w, Vector u)
{
	return w.prodVec(u);
}

Vector Camara::calcular_dir_rayo(int i, int j, float nx, float ny) // calculo de la direccion del rayo
{
	float t = df*tan(fov/2);
    float b = -t;
	float r = (((nx*t)/ny));
	float l = -r; 

	float u = l + ((r - l) * (i + 0.5))/nx;
	float v = b + ((t - b) * (j + 0.5))/ny;

	Vector dw = vectorW().num_product(-df);
	Vector uu = vectorU(vectorW()).num_product(u);
	Vector vv = vectorV(vectorW(),vectorU(vectorW())).num_product(v);

	return (dw.suma(uu.x,uu.y,uu.z)).suma(vv.x,vv.y,vv.z);
}