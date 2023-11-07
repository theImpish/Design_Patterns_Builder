#include "BikeType_Naked.h"


NakedBike::NakedBike()
{
	this->Reset();
	std::cout<< "-------------- New NakedBike Bike --------------\n";
}

NakedBike::~NakedBike()
{
	delete m_naked;
}

void NakedBike::Reset()
{
	this->m_naked = new Motorbike();
}

Motorbike* NakedBike::GetBike()
{
	Motorbike* bike = this->m_naked;
	this->Reset();
	return bike;
}

void NakedBike::BuildFrame() const 
{
	this->m_naked->AddPart("Frame-Aluminium");
}

void NakedBike::BuildFaring() const
{	
}

void NakedBike::BuildEngine() const
{
	std::string engine = "Engine-750cc,4Cylinders";
	this->m_naked->AddPart(engine);
}

void NakedBike::BuildSideCar() const
{
}

void NakedBike::BuildWheels() const
{
	this->m_naked->AddPart("Wheels-120/70/17,170/60/17");
}
