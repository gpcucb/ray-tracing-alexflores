#include"Esfera.h"

Esfera::Esfera(Vector pos, float radio)
{
	this->pos=pos;
	this->radio=radio;
}

Esfera::~Esfera()
{
}

void Esfera::interseccion(Rayo rayo)
{
	Vector p = rayo.pos;
	Vector d = rayo.dir;
	
	float a = d.prodEsc(d);
	Vector dd = d.num_product(2);
	float b = dd.prodEsc(p.resta(pos.x,pos.y,pos.z));
	float c = p.resta(pos.x,pos.y,pos.z).prodEsc(p.resta(pos.x,pos.y,pos.z));

	cout<<"At^2~ "<<a<<" Bt~ "<<b<<" C~ "<<c<<endl;

}