#pragma once

#include "Volition/Core/KeyCodes.h"
#include "Volition/Core/MouseCodes.h"

#include <glm/glm.hpp>

namespace Volition {

	class Input
	{
	public:
		static bool IsKeyPressed(KeyCode key);

		static bool IsMouseButtonPressed(MouseCode button);
		static glm::vec2 GetMousePosition();
		static float GetMouseX();
		static float GetMouseY();
	};
}
