//
// Created by ASUS on 12/11/2021.
//

#include "Management.h"

Management::Management() {}

bool Management::addOilStation(string idStation, string desc, double value ) {
    if(findOilStation( idStation ) == NULL ){
        vectorOil.push_back( new OilStation(idStation, desc, value ) );
        return true;
    }
    return false;
}

bool Management::addService(string placas, int galones , double value) {

        vectorService.push_back( new Service(placas, galones, value) );

}

int Management::countServices(string) {

}

double Management::sumService(string) {
    return 0;
}

double Management::totallyService() {

}

OilStation *Management::findOilStation(string idStation) {
    for(OilStation* oilStation : vectorOil){
        if( oilStation->getIdStation().compare( idStation ) == 0 ){
            return oilStation;
        }
    }

    return NULL;
}



