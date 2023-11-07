#pragma once
#include "MotorbikeBuilder.h"
#include "Motorbike.h"

class RaceBike : public MotorbikeBuilder
{
private:
	Motorbike* m_race;

public:
	RaceBike();
	~RaceBike();

	void Reset();

	void BuildFrame() const override;
	void BuildFaring() const override;
	void BuildEngine() const override;
	void BuildSideCar() const override;
	void BuildWheels() const override;

	Motorbike* GetBike();
};