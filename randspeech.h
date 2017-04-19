#ifndef RANDSPEECH_DEFINED
#define RANDSPEECH_DEFINED
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <vector>


class randspeech{
public:
   
    int filelength;
    std::string spokenLine;
    std::vector<std::string> phraseVector;
    
    randspeech();//default constructor
    
    randspeech(const randspeech &obj);// test constructor
    
    randspeech& operator=(const randspeech &obj){//assignment operator
        if(this != &obj){
            filelength = obj.filelength;
            spokenLine = obj.spokenLine;
            phraseVector = obj.phraseVector;
        }
        return *this;
    }
    
    ~randspeech();
    
    //when to create/speak a line?
    
    
    
    //read file length each statement is seperated by a newline
    
    //get math.rand file length
    
    //move to position
    
    // put line into string
    
    //output string
    
    
    
};

#endif



//longterm -- implement a readout of google calender to speak events that could correlate with schedule

