#pragma once

#include "Volition.h"

class Sandbox2D : public Volition::Layer
{
public:
	Sandbox2D();
	virtual ~Sandbox2D() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(Volition::Timestep ts) override;
	virtual void OnImGuiRender() override;
	void OnEvent(Volition::Event &e) override;

private:
	Volition::OrthographicCameraController m_CameraController;

	// Temp
	Volition::Ref<Volition::VertexArray> m_SquareVA;
	Volition::Ref<Volition::Shader> m_FlatColorShader;

	Volition::Ref<Volition::Texture2D> m_CheckerboardTexture;

	glm::vec4 m_SquareColor = {0.2f, 0.3f, 0.8f, 1.0f};
};
