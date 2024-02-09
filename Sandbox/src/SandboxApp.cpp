#include <Volition.h>
#include <Volition/Core/EntryPoint.h>

#include "Sandbox2D.h"
#include "ExampleLayer.h"

class Sandbox : public Volition::Application
{
public:
	Sandbox(const Volition::ApplicationSpecification &specification)
		: Volition::Application(specification)
	{
		// PushLayer(new ExampleLayer());
		PushLayer(new Sandbox2D());
	}

	~Sandbox()
	{
	}
};

Volition::Application *Volition::CreateApplication(Volition::ApplicationCommandLineArgs args)
{
	ApplicationSpecification spec;
	spec.Name = "Sandbox";
	spec.WorkingDirectory = "../Spine";
	spec.CommandLineArgs = args;

	return new Sandbox(spec);
}
