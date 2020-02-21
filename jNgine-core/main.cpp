#include "src/graphics/window.h"



int main()
{
	
	using namespace jNgine;
	using namespace graphics;

	Window window("jNgine", 960, 600);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	while (!window.closed())
	{
		window.clear();
		//glBegin(GL_TRIANGLES);
		//glVertex2f(-0.5f, -0.5f);
		//glVertex2f(-0.0f, 0.5f);
		//glVertex2f(0.5f, -0.5f);
		//glEnd();
		glDrawArrays(GL_ARRAY_BUFFER, 0, 6);

		window.update();
	}

	return 0;
}