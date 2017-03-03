#ifndef VECTOR_H
#define VECTOR_H
#include<iostream>
#include<stdio.h>
using namespace std;
class Vector{
public:
	int a;
	int b;
	int c;

public:
	Vector();
    ~Vector();
	Vector suma(int x, int y, int z);
	Vector resta(int x, int y, int z);
	void mostrar();
};

#endif