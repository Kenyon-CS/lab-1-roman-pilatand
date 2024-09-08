#include <string>
#include <iostream>
#include "Roman.h"



///Private functions////




//////Public functions///////

//Default Constructor function
Roman::Roman(){
    std::string numeral = "";
    int integerValue = 0;
}

//Constructor function for roman numeral
Roman::Roman(const std::string& numeral){
    std::string romanNumeral = numeral;
    int integerValue = romanToInt(romanNumeral);
}

//Constructor function for roman integer
Roman::Roman(int value){
    int integerValue = value;
    std::string romanNumeral = intToRoman(integerValue);
}


//Print Integer
void Roman::printDec() const {
    std::cout << integerValue;
}

//Print Roman
void Roman::printRoman() const {
    std::cout << romanNumeral;
}

//Set integer value
void Roman::setInt(int value){
    int integerValue = value;
}

//Set Roman numeral
void Roman::setRoman(std::string numeral){
   std::string romanNumeral = numeral;
}

//Return Integer
int Roman::getInt() const {
    return integerValue;
}

//Return Roman numeral
std::string Roman::getRoman() const{
    return romanNumeral;
}



 //int romanToInt(std::string& numeral){
 //for int i 

