#ifndef RANDSPEECH_DEFINED
#define RANDSPEECH_DEFINED
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <random>


class randspeech{
public:
   
    int filelength;
    std::string spokenLine;
    
    randspeech();//default constructor
    
    randspeech(const randspeech &obj);// test constructor
    
    randspeech& operator=(const randspeech &obj){//assignment operator
        if(this != &obj){
            filelength = obj.filelength;
            spokenLine = obj.spokenLine;
        }
        return *this;
    }
    
    ~randspeech();
    
    std::string getSpeechLine(const std::string &fileLocation);
    
    
    
};

#endif



//longterm -- implement a readout of google calender to speak events that could correlate with schedule

