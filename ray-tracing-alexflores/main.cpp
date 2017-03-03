#include"RGBColor.h"
#include"Vector.h"

int main()
{
	Vector vec1, vec2, res;
	vec1.a = 2;
	vec1.b = 3;
	vec1.c = 5;

	vec2.a = 3;
	vec2.b = 7;
	vec2.c = 6;

	res = vec1.suma(vec2.a, vec2.b, vec2.c);

	vec1.mostrar();
	vec2.mostrar();
	res.mostrar();

	system("pause");
	system("cls");

	return 0;
}