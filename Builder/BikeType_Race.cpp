#include "BikeType_Race.h"


RaceBike::RaceBike()
{
	this->Reset();
	std::cout << "-------------- New RaceBike Bike --------------\n";
}

RaceBike::~RaceBike()
{
	delete m_race;
}

void RaceBike::Reset()
{
	this->m_race = new Motorbike();
}

Motorbike* RaceBike::GetBike()
{
	Motorbike* bike = this->m_race;
	this->Reset();
	return bike;
}

void RaceBike::BuildFrame() const
{
	this->m_race->AddPart("Frame-Carbon");
}

void RaceBike::BuildFaring() const
{
	this->m_race->AddPart("Faring");
}

void RaceBike::BuildEngine() const
{
	std::string engine = "Engine-800cc,4Cylinders";
	this->m_race->AddPart(engine);
}

void RaceBike::BuildSideCar() const
{
}

void RaceBike::BuildWheels() const
{
	this->m_race->AddPart("Wheels-120/60/16,180/50/17");
}
