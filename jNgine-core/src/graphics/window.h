#pragma once

#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace jNgine {
namespace graphics {

		class Window
		{
		private:
			const char* m_Title;
			int m_Width, m_Height;
			GLFWwindow* m_Window;
			bool m_Closed;
		public:	
			Window(const char* title, int width, int height);
			~Window();
			bool closed() const;
			void clear() const;
			void update();
			inline int getWidth() const { return m_Width; };
			inline int getHeight() const { return m_Height; };
			//inline void setWidth(int width) { m_Width = width; };
			//inline void setHeight(int height) { m_Height = height; };
		private:
			bool init();

		};




} }