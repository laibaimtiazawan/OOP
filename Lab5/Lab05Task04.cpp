#include <iostream>
using namespace std;

class Device {
protected:
    string deviceName;
    int deviceID;
    int* data;

public:
    Device(string name, int id, int d) {
        deviceName = name;
        deviceID = id;
        data = new int(d);
    }

    ~Device() {
        delete data;
        cout << "Device memory released" << endl;
    }
};

class Sensor : public Device {
private:
    string sensorType;
    float* sensorValue;

public:
    Sensor(string name, int id, int d, string type, float val) : Device(name, id, d) {
        sensorType = type;
        sensorValue = new float(val);
    }

    ~Sensor() {
        delete sensorValue;
        cout << "Sensor memory released" << endl;
    }
};

int main() {
    Sensor* s = new Sensor("TemperatureDevice", 101, 50, "Temperature", 36.5);
    delete s;
    return 0;
}