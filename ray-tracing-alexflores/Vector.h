#ifndef VECTOR_H
#define VECTOR_H
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
class Vector{ // vector u
public:
	float x;
	float y;
	float z;

public:
	Vector();
    ~Vector();
	Vector suma(float a, float b, float c);
	Vector resta(float a, float b, float c);
	float mod();
	Vector prodVec(Vector v);
	float prodEsc(Vector v);
	Vector num_product(float num);
	void mostrar();
};

#endif