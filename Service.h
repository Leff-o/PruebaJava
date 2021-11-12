//
// Created by ASUS on 12/11/2021.
//

#ifndef JORGEGAMBOA_SERVICE_H
#define JORGEGAMBOA_SERVICE_H

#include <ostream>
#include "string"
#include "OilStation.h"
using namespace std;

class Service {

private:

    std::string vehiclePlate;
    int galons;
    double serviceValue;

public:

    Service(const string &vehiclePlate, int galons, double serviceValue);

    friend ostream &operator<<(ostream &os, const Service &service);

    const string &getVehiclePlate() const;

    void setVehiclePlate(const string &vehiclePlate);

    int getGalons() const;

    void setGalons(int galons);

    double getServiceValue() const;

    void setServiceValue(double serviceValue);

};


#endif //JORGEGAMBOA_SERVICE_H
