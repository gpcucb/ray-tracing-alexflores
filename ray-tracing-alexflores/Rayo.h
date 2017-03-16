#ifndef RAYO_H
#define RAYO_H
#include"Vector.h"
using namespace std;
class Rayo{
public:
	Vector pos;
	Vector dir;

public:
	Rayo(Vector pos, Vector dir);
    ~Rayo();
};

#endif