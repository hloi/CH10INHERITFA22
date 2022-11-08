//
// Created by hloi on 11/3/2022.
//
#include <iostream>
#include <sstream>
#include "Soup.h"

using namespace std;
const std::string &Soup::getFlavor() const {
    return flavor;
}

void Soup::setFlavor(const std::string &flavor) {
    Soup::flavor = flavor;
}

Soup::Soup(std::string name, int quantity, std::string package, std::string flavor) :
    Food(name, quantity, package), flavor(flavor){
    cout << "Soup non-default constructor" << endl;
}

//const string &Soup::getName() const {
//    return name;
//}

//void Soup::setName(const string &name) {
//    Soup::name = name;
//}

std::string Soup::to_string() {
    ostringstream oss;
    oss << Food::to_string() << ", " << flavor;
    return oss.str();
}
