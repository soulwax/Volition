#pragma once

#include "Volition/Core/Base.h"
#include "Volition/Scene/Scene.h"
#include "Volition/Scene/Entity.h"

namespace Volition
{

	class SceneHierarchyPanel
	{
	public:
		SceneHierarchyPanel() = default;
		SceneHierarchyPanel(const Ref<Scene> &scene);

		void SetContext(const Ref<Scene> &scene);

		void OnImGuiRender();

		Entity GetSelectedEntity() const { return m_SelectionContext; }
		void SetSelectedEntity(Entity entity);

	private:
		template <typename T>
		void DisplayAddComponentEntry(const std::string &entryName);

		void DrawEntityNode(Entity entity);
		void DrawComponents(Entity entity);

	private:
		Ref<Scene> m_Context;
		Entity m_SelectionContext;
	};

}
