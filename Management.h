//
// Created by ASUS on 12/11/2021.
//

#ifndef JORGEGAMBOA_MANAGEMENT_H
#define JORGEGAMBOA_MANAGEMENT_H
#include "string"
#include "vector"
#include "Service.h"
#include "OilStation.h"
using namespace std;

class Management {

public:
    Management();
   bool addOilStation(string,string,double);
   bool addService(string,int,double);
   int countServices(string);
   double sumService(string);
   double totallyService();

private:
    vector<Service*> vectorService;
    vector<OilStation*> vectorOil;
    OilStation *findOilStation(string);
};


#endif //JORGEGAMBOA_MANAGEMENT_H
