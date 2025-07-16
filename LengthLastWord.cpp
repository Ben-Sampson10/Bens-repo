#include "LengthLastWord.h"


int LengthLastWord::lengthOfLastWord(std::string s) {
        int wordCounter = 0;
        bool spaceAtEnd = false;
        int spaceAtEndHolder = 0;
        for(int i = 0; i < s.size(); i++){
            if(!spaceAtEnd && s[i] == ' '){
                spaceAtEndHolder = wordCounter;
                spaceAtEnd = true;
                wordCounter = 0;
            }
            else if (s[i] != ' '){
                spaceAtEnd = false;
                wordCounter = wordCounter + 1;
            }
        }
        if(spaceAtEnd){
            return spaceAtEndHolder; 
        }
        else{
            return wordCounter;
        }
}
