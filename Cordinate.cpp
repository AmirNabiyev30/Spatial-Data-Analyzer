//
// Created by Amir Nabiyev on 3/18/24.
//
#include "Cordinate.h"
#include <string>
#include<iostream>
#include <vector>

//constructors
Coords::Coordinate::Coordinate(){
    coordinates = "";
    occurences =  0;
    two_dimensional=false;

};
Coords::Coordinate::Coordinate(const std::string& coords,bool twoD){
     coordinates  = coords;
     occurences = 0;
     two_dimensional = twoD;
     ReadCoordinates(coordinates,two_dimensional);
};

//getter and setters

std::vector<int> Coords::Coordinate::getCoordinates(){
    return coordinateValues;
};

int Coords::Coordinate::getOccurences() {
    return occurences;
}

//reading coordinate functions
void Coords::Coordinate::ReadCoordinates(const std::string& line, bool twoD) {
    int axises;
    //defining axises depending on what
    if(twoD){
        axises= 2;
    }
    else{
        axises =3;
    }
    std::string val;
    int reader;
    for(int axis = 0;axis<axises;axis++){
        unsigned long int i;
        if(axis == 0 ){
            i = line.find('X');
        }
        else if(axis == 1){
            i = line.find('Y');
        }
        else{
            i = line.find('Z');
        }
        val="";
        //loop that reads values from string
        while(i < line.length()){
            if(isdigit(line[i])){
                reader = i;
                while(line[reader] != ',' && line[reader] != ' ' && reader != line.length()){
                    val+=line[reader];
                    reader++;
                }
                break;
            }
            i++;
        }
        coordinateValues.push_back(stoi(val));
    }

}


