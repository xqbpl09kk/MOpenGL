#pragma once
#include<glad/glad.h>
#include"Vectors.h"
class Mesh
{
public :

	void buildVertics();
	void clearWith(vector4);
	void draw(unsigned int programId);

protected :
	unsigned int VBO, VAO , EBO;

	 
};

