
#include <iostream>

#include "Director.h"
#include "BikeType_Naked.h"
#include "BikeType_Race.h"






int main()
{
	Director* boss = new Director();
	NakedBike* nakedBike = new NakedBike();

	boss->set_builder(nakedBike);
	boss->BuildMotorBike();

	Motorbike* mybike = nakedBike->GetBike();
	mybike->ListParts();
	delete nakedBike;

	RaceBike* raceBike = new RaceBike();
	boss->set_builder(raceBike);
	boss->BuildMotorBike();

	mybike = raceBike->GetBike();
	mybike->ListParts();

	delete mybike;
	std::cin.get();

}