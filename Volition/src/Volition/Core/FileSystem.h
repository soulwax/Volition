#pragma once

#include "Volition/Core/Buffer.h"

namespace Volition {

	class FileSystem
	{
	public:
		// TODO: move to FileSystem class
		static Buffer ReadFileBinary(const std::filesystem::path& filepath);
	};

}
