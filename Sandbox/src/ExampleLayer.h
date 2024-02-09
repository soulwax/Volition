#pragma once

#include "Volition.h"

class ExampleLayer : public Volition::Layer
{
public:
	ExampleLayer();
	virtual ~ExampleLayer() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Volition::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Volition::Event &e) override;

private:
	Volition::ShaderLibrary m_ShaderLibrary;
	Volition::Ref<Volition::Shader> m_Shader;
	Volition::Ref<Volition::VertexArray> m_VertexArray;

	Volition::Ref<Volition::Shader> m_FlatColorShader;
	Volition::Ref<Volition::VertexArray> m_SquareVA;

	Volition::Ref<Volition::Texture2D> m_Texture, m_SoulwaxLogoTexture;

	Volition::OrthographicCameraController m_CameraController;
	glm::vec3 m_SquareColor = {0.2f, 0.3f, 0.8f};
};
