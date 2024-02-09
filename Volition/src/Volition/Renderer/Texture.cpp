#include "vlpch.h"
#include "Volition/Renderer/Texture.h"

#include "Volition/Renderer/Renderer.h"
#include "Platform/OpenGL/OpenGLTexture.h"

namespace Volition
{

	Ref<Texture2D> Texture2D::Create(const TextureSpecification &specification)
	{
		switch (Renderer::GetAPI())
		{
		case RendererAPI::API::None:
			VL_CORE_ASSERT(false, "RendererAPI::None is currently not supported!");
			return nullptr;
		case RendererAPI::API::OpenGL:
			return CreateRef<OpenGLTexture2D>(specification);
		}

		VL_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}

	Ref<Texture2D> Texture2D::Create(const std::string &path)
	{
		switch (Renderer::GetAPI())
		{
		case RendererAPI::API::None:
			VL_CORE_ASSERT(false, "RendererAPI::None is currently not supported!");
			return nullptr;
		case RendererAPI::API::OpenGL:
			return CreateRef<OpenGLTexture2D>(path);
		}

		VL_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}

}
