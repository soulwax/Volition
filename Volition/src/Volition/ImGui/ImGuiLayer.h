#pragma once

#include "Volition/Core/Layer.h"

#include "Volition/Events/ApplicationEvent.h"
#include "Volition/Events/KeyEvent.h"
#include "Volition/Events/MouseEvent.h"

namespace Volition {

	class ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer() = default;

		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnEvent(Event& e) override;

		void Begin();
		void End();

		void BlockEvents(bool block) { m_BlockEvents = block; }
		
		void SetDarkThemeColors();

		uint32_t GetActiveWidgetID() const;
	private:
		bool m_BlockEvents = true;
	};

}
