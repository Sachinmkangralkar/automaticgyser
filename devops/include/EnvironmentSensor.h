#ifndef ENVIRONMENTSENSOR_H
#define ENVIRONMENTSENSOR_H

class EnvironmentSensor
{
private:
    double currentTemperature;

public:
    double getCurrentTemperature() const;
    void setCurrentTemperature(double temp);
};

#endif
