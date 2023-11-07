#pragma once
#include <vector>
#include <string>
#include <iostream>

class Motorbike
{
private:
public:
	std::vector<std::string> m_parts;
	std::string p;
	void AddPart(std::string part);
	void ListParts();
};