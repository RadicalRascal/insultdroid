#include "randspeech.h"

using namespace std;

randspeech::randspeech(): filelength(0) {}

randspeech::randspeech(const randspeech &obj){
    filelength = obj.filelength;
    spokenLine = obj.spokenLine;
    phraseVector = obj.phraseVector;
}

randspeech::~randspeech(){}
