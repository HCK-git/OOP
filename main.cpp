#include <assert.h>
#include <iostream>
#include "commands.h"

int main() {
	std::string name = "Tomato";
	std::string measurement = "kg";
	int count = 1;
	int newCount = 10;
	std::string newName = "Latuce";
	std::string newMeasurement = "kg";

	Ingridient firstIngridient;
	assert(firstIngridient.getCount() == NO_COUNT);
	assert(firstIngridient.getName() == NO_NAME);
	assert(firstIngridient.getMeasurement() == NO_MEASUREMENT);
	std::cout << "Firstngridient" << std::endl;
	std::cout << "It is working" << std::endl << std::endl;

	Ingridient secondIngridient(name, measurement, count);
	assert(secondIngridient.getName() == name);
	assert(secondIngridient.getMeasurement() == measurement);
	assert(secondIngridient.getCount() == count);
	std::cout << "SecondIngridient" << std::endl;
	std::cout << "It is working" << std::endl << std::endl;

	Ingridient thirdIngridient = secondIngridient;
	assert(thirdIngridient.getName() == secondIngridient.getName());
	assert(thirdIngridient.getMeasurement() == secondIngridient.getMeasurement());
	assert(thirdIngridient.getCount() == secondIngridient.getCount());
	std::cout << "ThirdIngridient" << std::endl;
	std::cout << "It is working" << std::endl << std::endl;

	Ingridient fourthIngridient;
	fourthIngridient.setCount(newCount);
	fourthIngridient.setMeasurement(newMeasurement);
	fourthIngridient.setName(newName);
	assert(fourthIngridient.getName() == newName);
	assert(fourthIngridient.getMeasurement() == newMeasurement);
	assert(fourthIngridient.getCount() == newCount);
	std::cout << "Ingridient" << std::endl;
	std::cout << "It is working" << std::endl;

	return 0;
}