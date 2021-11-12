//
// Created by ASUS on 12/11/2021.
//

#ifndef JORGEGAMBOA_OILSTATION_H
#define JORGEGAMBOA_OILSTATION_H

#include <ostream>
#include "string"
using namespace std;
class OilStation {

private:
    std::string idStation;
    std::string description;
    double galonCost;


public:
    friend ostream &operator<<(ostream &os, const OilStation &station);

    OilStation(const string &idStation, const string &description, double galonCost);

    const string &getIdStation() const;

    void setIdStation(const string &idStation);

    const string &getDescription() const;

    void setDescription(const string &description);

    double getGalonCost() const;

    void setGalonCost(double galonCost);
};


#endif //JORGEGAMBOA_OILSTATION_H
