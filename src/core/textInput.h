class TextInput {

	private:
		char path[1000];

	public:
		float GetFloatFromFile(const char * filePath);
		int GetIntFromFile(const char * filePath);
		std::string GetStringFromFile(const char * filePath);
		bool GetBoolFromUser(const char * filePath);
}