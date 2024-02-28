#include "EnvironmentSensor.h"

double EnvironmentSensor::getCurrentTemperature() const
{
    return currentTemperature;
}

void EnvironmentSensor::setCurrentTemperature(double temp)
{
    currentTemperature = temp;
}
