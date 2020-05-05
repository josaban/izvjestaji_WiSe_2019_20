<<<<<<< HEAD
#ifndef Sensors_h
#define Sensors_h

#include <Arduino.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <Wire.h>
#include <BH1750.h>

#define DHTPIN 2
#define DHTTYPE DHT22

class SENSORS {
public:
        SENSORS();
        ~SENSORS();
        void DHT_init();
        void BH1750_init();
        void readTempHum();
        void readLight();
};

=======
#ifndef Sensors_h
#define Sensors_h

#include <Arduino.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <Wire.h>
#include <BH1750.h>

#define DHTPIN 2
#define DHTTYPE DHT22

class SENSORS {
public:
        SENSORS();
        ~SENSORS();
        void DHT_init();
        void BH1750_init();
        void readTempHum();
        void readLight();
};

>>>>>>> 339729d1fed3fec1651ee827eb372c6b41791a6c
#endif