#ifndef ENGINE_H
#define ENGINE_H

#include <GL\glew.h>
#include <gl/wglew.h>
#include <GLFW/glfw3.h>

#include <core/Config.h>
#include <core/Input.h>
#include <core/Logger.h>

class Engine {
public:
	Engine();
	~Engine();

	bool initialize();

	void update();

	GLFWwindow* getCurrentContext();
	
private:
    static Input m_pInput;
	static GLFWwindow* m_pWindow;

	Logger* m_pLogger;
    Config  m_config;
};
#endif