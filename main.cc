#include "randspeech.h"
#include <iostream>
#include <cstring>
#include <string>


using namespace std;

string linelocation ="/Users/Leif/Documents/workspace/ROBOT/Phrases/";


int main(int argc, char* argv[]){
    
    if(argc != 2){
        cout<<"PUT IN AN ARGUMENT" <<endl;
        exit(1);
    }
    
    linelocation = linelocation + argv[1] +".txt";
    
    randspeech tester;
    string output;
    output = tester.getSpeechLine(linelocation);
    
    tester.writeSpeechLine(output);
    
    
    string pythonExecute = "say -v Tom '" +output +"'"; // needs to be changed to pyttxs solution for linux
    char *executor = new char [pythonExecute.length()+1];
    std::strcpy(executor, pythonExecute.c_str());
    system(executor);
    
    
    
    cout<< output <<endl;

}
