#include"RGBColor.h"
#include"Vector.h"
#include"Camara.h"
#include"Rayo.h"
#include"Esfera.h"

int main()
{
	/*Vector vec1, vec2, res;
	vec1.x = 2;
	vec1.y = 3;
	vec1.z = 5;

	vec2.x = 3;
	vec2.y = 7;
	vec2.z = 6;

	res = vec1.suma(vec2.x, vec2.y, vec2.z);

	vec1.mostrar();
	vec2.mostrar();
	res.mostrar();*/

	// Valores de camara 
	Vector e,center,up,dir;
	e.x = 1;
	e.y = 2;
	e.z = -6;

	center.x = 1;
	center.y = 2;
	center.z = -4;

	up.x = 0;
	up.y = 1;
	up.z = 0;

	float fov = 39.0;
	float df = 1.0;
	float nx = 640.0;
	float ny = 480.0;

	//Valores de esfera
	Vector posicion;
	posicion.x = 370;
	posicion.y = 120;
	posicion.z = 370;
	float radio = 120;

	Camara camara(e,center,up,fov,df);
	Esfera esfera(posicion,radio);

		for (int i = 0; i < nx; i++){
			for (int j= 0; j < ny; j++){
				dir = camara.calcular_dir_rayo(i,j,nx,ny);
				Rayo rayo(e,dir);
				esfera.interseccion(rayo);
				//dir.mostrar();
			}
		}


	system("pause");
	system("cls");

	return 0;
}