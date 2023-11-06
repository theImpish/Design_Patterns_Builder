#pragma once

enum class Frame{ Aluminium, Steel, Carbon };
enum class Wheels { Dirt, Road, Track };

class MotorbikeBuilder
{
public:
	MotorbikeBuilder() {};
	virtual ~MotorbikeBuilder() {};
	virtual void BuildFrame() const = 0;
	virtual void BuildEngine() const = 0;
	virtual void BuildFaring() const = 0;
	virtual void BuildSideCar() const = 0;
	virtual void BuildWheels() const = 0;
};