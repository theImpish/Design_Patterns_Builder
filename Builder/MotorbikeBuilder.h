#pragma once

class MotorbikeBuilder
{
public:
	//MotorbikeBuilder() {};
	virtual ~MotorbikeBuilder() {};
	virtual void BuildFrame() const = 0;
	virtual void BuildEngine() const = 0;
	virtual void BuildFaring() const = 0;
	virtual void BuildSideCar() const = 0;
	virtual void BuildWheels() const = 0;
};