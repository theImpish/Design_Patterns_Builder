#pragma once
#include "MotorbikeBuilder.h"
#include "Motorbike.h"

class Naked : public MotorbikeBuilder
{
private:
	Motorbike* m_naked;

public:
	Naked();
	~Naked();

	void Reset();
	Motorbike* GetBike();

	void BuildFrame() const override;
	void BuildEngine() const override;
	void BuildWheels() const override;

};