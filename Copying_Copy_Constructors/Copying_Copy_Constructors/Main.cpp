#include <iostream>
#include <string>

class String
{
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string)
	{
		m_Size = strlen(string);
		// m_Buffer = new char[m_Size]; // no null
		m_Buffer = new char[m_Size + 1]; // with null
		/*
		
		takes each letter of the string and copies it one by one...

		for (int i = 0; i < m_Size; i++)
			m_Buffer[i] = string[i];

		*/
		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;
	}

	String(const String& other)
		: m_Size(other.m_Size)
	{
		std::cout << "Copied String!" << std::endl;
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}

	~String()
	{
		delete[] m_Buffer;
	}

	char& operator[](int index)
	{
		return m_Buffer[index];
	}


	friend std::ostream& operator<<(std::ostream& os, const String& string);
};

void PrintString(const String& string)
{
	std::cout << string << std::endl;
}
std::ostream& operator<<(std::ostream& os, const String& string)
{
	os << string.m_Buffer;
	return os;
}
int main()
{
	String string("Lean");
	String second = string;

	second[2] = 'i';
	// std::cout << string << std::endl;
	// std::cout << second << std::endl;	// ERROR (without the copy ctor): results in an exception when destroyed because the char* in 'second' has the same address freed by 'string' - shallow copy
	
	PrintString(string);
	PrintString(second);

	std::cin.get();
}