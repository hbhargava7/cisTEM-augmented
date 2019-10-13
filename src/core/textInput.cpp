#include "core_headers.h"
#include <nlohmann/json.hpp>

using json = nlohmann::json;

TextInput::TextInput(const char *filePath)
{
	wxPrintf("\n\n        **   Welcome to Hersh's Augmented Refine3D   **\n\n");

	path = filePath;

}
