#include "Naked.h"


Naked::Naked()
{
	this->Reset();
}

Naked::~Naked()
{
	delete m_naked;
}

void Naked::Reset()
{
	Motorbike* m_naked = new Motorbike();
}

Motorbike* Naked::GetBike()
{
	Motorbike* bike = this->m_naked;
	this->Reset();
	return bike;
}

void Naked::BuildFrame() const
{
	this->m_naked->AddPart("Frame-Aluminium");
}

void Naked::BuildEngine() const
{
	this->m_naked->AddPart("Engine-750cc,4Cylinders");
}

void Naked::BuildWheels() const
{
	this->m_naked->AddPart("Wheels-120/70/17,170/60/17");
}
