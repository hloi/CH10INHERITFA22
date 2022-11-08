//
// Created by hloi on 11/3/2022.
//
#include <iostream>
#include <sstream>
#include "Food.h"
using namespace std;

Food::Food(std::string name, int quantity, std::string package) :
    GenericItem(name, quantity) {
    cout << "Food non-default constructor." << endl;
    this->package = package;
}

const std::string &Food::getAPackage() const {
    return package;
}

void Food::setAPackage(const std::string &aPackage) {
    package = aPackage;
}

Food::Food() {
    cout << "Food default constructor" << endl;
}

std::string Food::to_string() {
    ostringstream oss;
    oss << GenericItem::to_string() << ", " << package;
    return oss.str();
}
