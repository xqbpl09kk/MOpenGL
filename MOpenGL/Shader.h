#pragma once
#include<string>
class Shader
{
public :
	int shaderProgram;
	Shader(const char* vertSource, const char* fragSource);
	void setFloat(char* key , float value);
protected : 

};

