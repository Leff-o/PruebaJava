//
// Created by ASUS on 12/11/2021.
//

#include "Service.h"


ostream &operator<<(ostream &os, const Service &service) {
    os << "vehiclePlate: " << service.vehiclePlate << " galons: " << service.galons << " serviceValue: "
       << service.serviceValue;
    return os;
}

const string &Service::getVehiclePlate() const {
    return vehiclePlate;
}

void Service::setVehiclePlate(const string &vehiclePlate) {
    Service::vehiclePlate = vehiclePlate;
}

int Service::getGalons() const {
    return galons;
}

void Service::setGalons(int galons) {
    Service::galons = galons;
}

double Service::getServiceValue() const {
    return serviceValue;
}

void Service::setServiceValue(double serviceValue) {
    Service::serviceValue = serviceValue;
}

Service::Service(const string &vehiclePlate, int galons, const OilStation &oiltSta) : vehiclePlate(vehiclePlate),
                                                                                      galons(galons),
                                                                                      oiltSta(oiltSta) {}
