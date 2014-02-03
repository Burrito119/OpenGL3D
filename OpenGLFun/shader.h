#pragma once

#include <string>
#include <GL\glew.h>


class Shader
{
public:
	Shader(const std::string& fileName);
	Shader();
	virtual ~Shader();
	
	void Bind();

protected:
	static const int NUM_SHADERS = 2;

private:
	GLuint _program;
	GLuint _shader[NUM_SHADERS];
	

	std::string LoadShader(const std::string& fileName);
};
