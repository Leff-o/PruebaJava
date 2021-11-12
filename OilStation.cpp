//
// Created by ASUS on 12/11/2021.
//

#include "OilStation.h"

OilStation::OilStation(const string &idStation, const string &description, double galonCost) : idStation(idStation),
                                                                                               description(description),
                                                                                               galonCost(galonCost) {}

const string &OilStation::getIdStation() const {
    return idStation;
}

void OilStation::setIdStation(const string &idStation) {
    OilStation::idStation = idStation;
}

const string &OilStation::getDescription() const {
    return description;
}

void OilStation::setDescription(const string &description) {
    OilStation::description = description;
}

double OilStation::getGalonCost() const {
    return galonCost;
}

void OilStation::setGalonCost(double galonCost) {
    OilStation::galonCost = galonCost;
}

ostream &operator<<(ostream &os, const OilStation &station) {
    os << "idStation: " << station.idStation << " description: " << station.description << " galonCost: "
       << station.galonCost;
    return os;
}
