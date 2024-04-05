
#include "Cordinate.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>



int main() {
    //defines the txt file
    std::ifstream spatialFile;

    //declaring vectors that will store the 2 and 3d points
    std::vector<Coords::Coordinate> pointVector2D;
    std::vector<Coords::Coordinate> pointVector3D;
    //defines variables
    std::string line;
    //opens the file
    spatialFile.open("csc103.txt");
    //if an error occurs when opening the file terminate the program
    if(!spatialFile.is_open()){
        std::cout<<"Could not open csc103.txt. Therefore terminating the program"<<std::endl;
        return 1;
    }
    //reading the lines
    while(!spatialFile.eof() && spatialFile.good()){
        getline(spatialFile,line);
        //pushing back coordinates if the X is present
        if(line.find('X') != std::string::npos){
            //if 3D component is present then pushing to 3D vector
            if(line.find('Z') != std::string::npos){
                pointVector3D.push_back((Coords::Coordinate(line,false)));
            }
            //if no 3D component is present then push back to 2D vector
            else{
                pointVector2D.push_back((Coords::Coordinate(line,true)));
            }

        }
    }
    //analysis functions
    std::cout<<"The amount of 3d points is "<<pointVector3D.size()<<std::endl;
    std::cout<<"The amount of 2D points is "<<pointVector2D.size()<<std::endl;





    return 0;
}
