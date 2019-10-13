#include "core_headers.h"
#include <nlohmann/json.hpp>

using json = nlohmann::json;

TextInput::TextInput(const char *filePath)
{
	  path = filePath;
}
