#pragma once
#include "MotorbikeBuilder.h"
#include "Motorbike.h"

class NakedBike : public MotorbikeBuilder
{
private:
	Motorbike* m_naked;

public:
	NakedBike();
	~NakedBike();

	void Reset();

	void BuildFrame() const override;
	void BuildFaring() const override;
	void BuildEngine() const override;
	void BuildSideCar() const override;
	void BuildWheels() const override;

	Motorbike* GetBike();
};