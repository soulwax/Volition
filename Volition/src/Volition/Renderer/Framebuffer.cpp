#include "vlpch.h"
#include "Volition/Renderer/Framebuffer.h"

#include "Volition/Renderer/Renderer.h"

#include "Platform/OpenGL/OpenGLFramebuffer.h"

namespace Volition
{

	Ref<Framebuffer> Framebuffer::Create(const FramebufferSpecification &spec)
	{
		switch (Renderer::GetAPI())
		{
		case RendererAPI::API::None:
			VL_CORE_ASSERT(false, "RendererAPI::None is currently not supported!");
			return nullptr;
		case RendererAPI::API::OpenGL:
			return CreateRef<OpenGLFramebuffer>(spec);
		}

		VL_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}

}
