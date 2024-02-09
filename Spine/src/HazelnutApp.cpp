#include <Volition.h>
#include <Volition/Core/EntryPoint.h>

#include "EditorLayer.h"

namespace Volition
{

	class Spine : public Application
	{
	public:
		Spine(const ApplicationSpecification &spec)
			: Application(spec)
		{
			PushLayer(new EditorLayer());
		}
	};

	Application *CreateApplication(ApplicationCommandLineArgs args)
	{
		ApplicationSpecification spec;
		spec.Name = "Spine";
		spec.CommandLineArgs = args;

		return new Spine(spec);
	}

}
