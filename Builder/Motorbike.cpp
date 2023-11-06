#include "Motorbike.h"

void Motorbike::AddPart(std::string part)
{
	m_parts.push_back(part);
}

void Motorbike::ListParts()
{
	for (auto& part : m_parts)
	{
		std::cout << part << std::endl;
	}
}
