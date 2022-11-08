//
// Created by hloi on 11/3/2022.
//
#include <iostream>
#include "GenericItem.h"
#include <sstream>

using namespace std;
//  name(name)
//  name = name
GenericItem::GenericItem(const std::string &name)  {
    this->name = name;

    cout << "GenericItem non-default constructor." << endl;
}

const std::string &GenericItem::getName() const {
    return name;
}

void GenericItem::setName(const std::string &name) {
    GenericItem::name = name;
}

int GenericItem::getQuantity() const {
    return quantity;
}

void GenericItem::setQuantity(int quantity) {
    GenericItem::quantity = quantity;
}

GenericItem::GenericItem(std::string name, int quantity) {
    cout << "GenericItem non-default constructor." << endl;
    this->name = name;
    this->quantity = quantity;
}

GenericItem::GenericItem() {
    cout << "GenericItem default constructor." << endl;
}

std::string GenericItem::to_string() {
    ostringstream oss;
    oss << name << ", " << quantity;
    return oss.str() ;
}
