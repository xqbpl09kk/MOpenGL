#include"WindowManager.h"
#include "Mesh.h"
#include "Shader.h"

const char* vertexShaderSource = "#version 330 core\n"
"layout (location = 0) in vec3 aPos;\n"
"void main()\n"
"{\n"
"   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
"}\0";
const char* fragmentShaderSource = "#version 330 core\n"
"out vec4 FragColor;\n"
"uniform float colorRed ;\n"
"void main()\n"
"{\n"
"   FragColor = vec4(1.0f, 0.5f, colorRed, 1.0f);\n"
"}\n\0";



int main() {
	WindowManager windowManager = WindowManager();
	windowManager.initWindow(); 
	Mesh mesh = Mesh(); 

	mesh.buildVertics();
	Shader shader = Shader(vertexShaderSource, fragmentShaderSource);
	while (windowManager.shouldCloseWindow()) {
		windowManager.processInput();
		//Draw background
		vector4 bgColor = { 0.2f, 0.3f, 0.3f, 1.0f };
		mesh.clearWith(bgColor);
		//specify shader uniforms
		char Key[] = "colorRed";
		shader.setFloat(Key, 1);
		//post draw 
		mesh.draw(shader.shaderProgram);
		//present
		windowManager.display(); 
	}
	windowManager.terminalWindow(); 
}