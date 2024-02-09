#include "vlpch.h"
#include "Entity.h"

namespace Volition
{

	Entity::Entity(entt::entity handle, Scene *scene)
		: m_EntityHandle(handle), m_Scene(scene)
	{
	}

}
