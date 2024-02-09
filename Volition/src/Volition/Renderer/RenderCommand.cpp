#include "vlpch.h"
#include "Volition/Renderer/RenderCommand.h"

namespace Volition
{

	Scope<RendererAPI> RenderCommand::s_RendererAPI = RendererAPI::Create();

}
