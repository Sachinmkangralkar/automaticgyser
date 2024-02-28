#include "SmartGeyser.h"

SmartGeyser::SmartGeyser(HomeOwner *o, EnvironmentSensor *s, WaterHeater *h)
    : owner(o), sensor(s), heater(h) {}

void SmartGeyser::activateGeyser()
{
    // Implementation to activate the geyser
}
