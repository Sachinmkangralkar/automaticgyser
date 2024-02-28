#include "HomeOwner.h"
#include "SmartGeyser.h"
#include "EnvironmentSensor.h"
#include "WaterHeater.h"

int main()
{
    // Create instances of classes
    HomeOwner *owner = new HomeOwner("John Doe");
    EnvironmentSensor *sensor = new EnvironmentSensor();
    WaterHeater *heater = new WaterHeater();

    // Assuming you have an instance of SmartGeyser, you can activate it
    SmartGeyser *geyser = new SmartGeyser(owner, sensor, heater);
    geyser->activateGeyser();

    // Free memory allocated to instances
    delete owner;
    delete sensor;
    delete heater;
    delete geyser;

    return 0;
}
