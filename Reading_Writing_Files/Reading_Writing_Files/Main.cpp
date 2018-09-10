#include <string>
#include <iostream>
#include <fstream>

class String
{
	std::string* m_StringPtr;
	std::string m_FileName;
	int m_Count;

public:
	String(std::string fName = "gutenberg_shakespeare")
		: m_StringPtr(nullptr),
		m_FileName(fName),
		m_Count(0)
	{
		std::ifstream file(m_FileName);

		// count file length
		countLines();

		// Allocate memory for each line
		m_StringPtr = new std::string[m_Count];

		// get the line and then put it in m_StringPtr[i]
		std::string buf;
		int i = 0;
		while (std::getline(file, buf))
			m_StringPtr[i] = buf;

		for (auto i = 0; i < m_Count; ++i)
			std::cout << m_StringPtr[i] << std::endl;
	}

	void countLines()
	{
		std::string buf;
		std::ifstream file(m_FileName);
		while (std::getline(file, buf))
			m_Count++;
	}

	~String()
	{
		delete[] m_StringPtr;
		m_StringPtr = nullptr;
	}
};

int main()
{
	String s;
	std::cin.get();
}