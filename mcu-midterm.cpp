#include <iostream>
#include <string>

string suffixList[8] = {"Kilo", "Mega", "Giga", "Tera", "Peta", "Exa", "Zetta", "Yotta"};
string suffixWithUnit(double number){
    if (number < 1000) 
        return to_string(number);
    else {
        int counter = 0;
        while (number >= 1000) {
            number /= 1000;
            counter++;
        }
        string res = to_string(number) + " " + suffixList[counter-1];
        return res;
    }
}

int main(){
    double number;
    std::cin >> number;
    std::cout << suffixWithUnit(number);
    return 0;
}