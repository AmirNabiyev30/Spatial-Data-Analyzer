//
// Created by Amir Nabiyev on 3/18/24.
//

#ifndef SPATIAL_DATA_ANALYZER_CORDINATE_H
#define SPATIAL_DATA_ANALYZER_CORDINATE_H
#include<cstring>
#include <vector>
#include <string>

namespace Coords{
    class Coordinate {
        std::string coordinates;
        int occurences;
        std:: vector<int> coordinateValues;
        bool two_dimensional;
        public:
        //constructor classes
        Coordinate();
        Coordinate(const std::string& coords, bool twoD);
        //getter and setter
        std::vector<int> getCoordinates();
        int getOccurences();
        //function that reads coordinates
        void ReadCoordinates(const std::string& coordinates, bool twoD);


    };
}

#endif //SPATIAL_DATA_ANALYZER_CORDINATE_H
