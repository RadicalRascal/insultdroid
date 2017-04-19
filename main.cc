#include "randspeech.h"
#include <iostream>


using namespace std;

string linelocation ="/Users/Leif/Documents/workspace/ROBOT/Phrases/";


int main(int argc, char* argv[]){
    
    linelocation = linelocation + argv[1] +".txt";
    
    randspeech tester;
    string output;
    output = tester.getSpeechLine(linelocation);
    
    
    cout<< output <<endl;

}
