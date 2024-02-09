#include "vlpch.h"
#include "Platform/OpenGL/OpenGLContext.h"

#include <GLFW/glfw3.h>
#include <glad/glad.h>

namespace Volition
{

	OpenGLContext::OpenGLContext(GLFWwindow *windowHandle)
		: m_WindowHandle(windowHandle)
	{
		VL_CORE_ASSERT(windowHandle, "Window handle is null!")
	}

	void OpenGLContext::Init()
	{
		VL_PROFILE_FUNCTION();

		glfwMakeContextCurrent(m_WindowHandle);
		int status = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
		VL_CORE_ASSERT(status, "Failed to initialize Glad!");

		VL_CORE_INFO("OpenGL Info:");
		VL_CORE_INFO("  Vendor: {0}", glGetString(GL_VENDOR));
		VL_CORE_INFO("  Renderer: {0}", glGetString(GL_RENDERER));
		VL_CORE_INFO("  Version: {0}", glGetString(GL_VERSION));

		VL_CORE_ASSERT(GLVersion.major > 4 || (GLVersion.major == 4 && GLVersion.minor >= 5), "Volition requires at least OpenGL version 4.5!");
	}

	void OpenGLContext::SwapBuffers()
	{
		VL_PROFILE_FUNCTION();

		glfwSwapBuffers(m_WindowHandle);
	}

}
