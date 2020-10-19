#include <Arduino.h>

#define DEFAULT_TS_PIN A0

class TemperatureSensor{

private:

protected:

public:

    uint8_t pin;
    int rawValue;
    
    TemperatureSensor(){
        // Default constructor
        pin = DEFAULT_TS_PIN;
        rawValue = 0;
    }

    TemperatureSensor(const uint8_t& newPin){
        pin = newPin;
        rawValue = 0;
    }
    
    float getTempInCelcius(){
        return (rawValue * (3.3 / 1023.0 * 100.0));
    }

    void update(){
        rawValue = analogRead(pin);
    }
};