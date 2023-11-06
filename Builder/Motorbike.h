#pragma once
#include <vector>
#include <string>
#include <iostream>

class Motorbike
{
private:
	std::vector<std::string> m_parts;

public:
	void AddPart(std::string part);
	void ListParts();
};