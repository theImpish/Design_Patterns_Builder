#pragma once
#include "MotorbikeBuilder.h"

class Director
{
private:
	MotorbikeBuilder* builder;
public:
	void set_builder(MotorbikeBuilder* builder);
	void BuildMotorBike();
};