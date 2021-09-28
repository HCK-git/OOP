#include "commands.h"

std::string& Ingridient::getName() {
	return name;
}

std::string& Ingridient::getMeasurement() {
	return measurement;
}

int Ingridient::getCount() const {
	return count;
}

void Ingridient::setCount(int newCount) {
	this->count = newCount;
}

Ingridient::~Ingridient()
{
}

void Ingridient::setName(std::string newName)
{
	this->name = newName;
}

void Ingridient::setMeasurement(std::string newMeasurement) {
	this->measurement = newMeasurement;
}

Ingridient::Ingridient() {
	this->name = NO_NAME;
	this->measurement = NO_MEASUREMENT;
	this->count = NO_COUNT;
}

Ingridient::Ingridient(std::string &newName, std::string &newNeasurement, int newCount) {
	this->name = newName;
	this->measurement = newNeasurement;
	this->count = newCount;
}

Ingridient::Ingridient(const Ingridient &newIngridient) {
	name = newIngridient.name;
	measurement = newIngridient.measurement;
	count = newIngridient.count;
}
