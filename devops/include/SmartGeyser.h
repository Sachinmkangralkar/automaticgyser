#ifndef SMARTGEYSER_H
#define SMARTGEYSER_H

#include "HomeOwner.h"
#include "EnvironmentSensor.h"
#include "WaterHeater.h"

class SmartGeyser
{
private:
    HomeOwner *owner;
    EnvironmentSensor *sensor;
    WaterHeater *heater;

public:
    SmartGeyser(HomeOwner *o, EnvironmentSensor *s, WaterHeater *h);
    void activateGeyser();
};

#endif
