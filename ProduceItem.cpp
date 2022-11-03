//
// Created by hloi on 11/3/2022.
//
#include <iostream>
#include "ProduceItem.h"

using namespace std;

const std::string &ProduceItem::getExpirationDate() const {
    return expirationDate;
}

void ProduceItem::setExpirationDate(const std::string &expirationDate) {
    ProduceItem::expirationDate = expirationDate;
}

ProduceItem::ProduceItem() {
    cout << "produceitem constructor." << endl;
}

ProduceItem::ProduceItem(std::string name, int quantity, std::string expirationDate) :
        GenericItem(name, quantity) {
    cout << "produceitem non-default constructor." << endl;
    this->expirationDate = expirationDate;
}
