#include "src/graphics/window.h"
#include "src/maths/maths.h"




int main()
{
	
	using namespace jNgine;
	using namespace graphics;
	using namespace maths;

	Window window("jNgine", 960, 600);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	vec4 a(4.0f, 9.0f, 5.0f, 2.0f);
	vec4 b(4.0f, 9.0f, 5.0f, 2.0f);

	vec4 c = a + b;


	while (!window.closed())
	{
		window.clear();

		std::cout << a << std::endl;
		//double x, y;
		//window.getMousePosition(x, y);

		//std::cout << x << ", " << y << std::endl;



		//glBegin(GL_TRIANGLES);
		//glVertex2f(-0.5f, -0.5f);
		//glVertex2f(-0.0f, 0.5f);
		//glVertex2f(0.5f, -0.5f);
		//glEnd();
		//glDrawArrays(GL_ARRAY_BUFFER, 0, 6);

		window.update();
	}

	return 0;
}