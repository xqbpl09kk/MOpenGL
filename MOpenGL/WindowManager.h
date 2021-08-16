#pragma once
#include "glad/glad.h"
#include <GLFW/glfw3.h>
const int SCR_WIDTH = 1024;
const int SCR_HEIGHT = 1024;
class WindowManager
{
public:
	int initWindow();
	bool shouldCloseWindow();
	void processInput();
	void display();
	void terminalWindow();

protected:
	GLFWwindow* window;
};

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
