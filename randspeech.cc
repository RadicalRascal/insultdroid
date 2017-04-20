#include "randspeech.h"

using namespace std;

randspeech::randspeech(): filelength(0) {}

randspeech::randspeech(const randspeech &obj){
    filelength = obj.filelength;
    spokenLine = obj.spokenLine;
}

randspeech::~randspeech(){}

std::string randspeech::getSpeechLine(const std::string &fileLocation){
    ifstream inputfile(fileLocation);//get the file location
    inputfile >> filelength; //get length of speech file
    
    getline(inputfile, spokenLine);//get rid of the rest of the line
    getline(inputfile, spokenLine);//get the vocabulary type
    
    
    std::random_device rd;     // only used once to initialise (seed) engine
    std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
    std::uniform_int_distribution<int> uni(2,filelength); // guaranteed unbiased
    int random_integer = uni(rng);
    
    string line;
    for(int i = 0; i <= filelength; ++i){ // iterate through file and reach the random index
        getline(inputfile, line);
        if(i == random_integer){
            getline(inputfile, line); // set the line to the random indexed line
            break;
        }
        
    }
    
    spokenLine = line; //concatenate the the vocab type with the line read
    
    return spokenLine;
}


void randspeech::writeSpeechLine(std::string writtenLine){
    string output = writtenLine;
    ofstream out("output.txt");
    out << output;
    
}
