<<<<<<< HEAD
#include "Sensors.h"
#include <LowPower.h>

SENSORS sensor;

void setup()
{
  Serial.begin(9600);
  sensor.DHT_init();
  sensor.BH1750_init();
}

void loop()
{
  sensor.readTempHum();
  sensor.readLight();

  delay(50);
  LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);
  delay(50);
}
=======
#include "Sensors.h"
#include <LowPower.h>

SENSORS sensor;

void setup()
{
  Serial.begin(9600);
  sensor.DHT_init();
  sensor.BH1750_init();
}

void loop()
{
  sensor.readTempHum();
  sensor.readLight();

  delay(50);
  LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);
  delay(50);
}
>>>>>>> 339729d1fed3fec1651ee827eb372c6b41791a6c
