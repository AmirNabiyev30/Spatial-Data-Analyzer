//
// Created by Amir Nabiyev on 3/18/24.
//
#include "Cordinate.h"
#include <string>
#include <cstring>

Coords::Coordinate::Coordinate(){
    coordinates = "";
    occurences =  0;
    two_dimensional=false;

};
Coords::Coordinate::Coordinate(const std::string& coords){
     coordinates  = coords;
     occurences = 0;
     two_dimensional = false;
     ReadCoordinates(coordinates,two_dimensional)
};

void Coords::Coordinate::ReadCoordinates(const std::string& line, bool twoD) {



}


