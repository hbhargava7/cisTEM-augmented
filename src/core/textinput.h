class TextInput {

	private:
		char path[1000];

	public:
		extern "C" TextInput(const char * filePath);
		
		// float GetFloatFromFile(const char * filePath);
		// int GetIntFromFile(const char * filePath);
		// std::string GetStringFromFile(const char * filePath);
		// bool GetBoolFromUser(const char * filePath);
};