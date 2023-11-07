#include "Director.h"

void Director::set_builder(MotorbikeBuilder* builder)
{
	this->builder = builder;
}

void Director::BuildMotorBike()
{
	this->builder->BuildEngine();
	this->builder->BuildFaring();
	this->builder->BuildFrame();
	this->builder->BuildSideCar();
	this->builder->BuildWheels();
}