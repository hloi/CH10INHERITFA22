//
// Created by hloi on 11/3/2022.
//

#ifndef CH10INHERITFA22_FOOD_H
#define CH10INHERITFA22_FOOD_H
#include <string>
#include "GenericItem.h"

class Food : public GenericItem {
private:
    std::string package;
public:
    const std::string &getAPackage() const;

    void setAPackage(const std::string &aPackage);
    Food();
    Food(std::string name, int quantity, std::string package);

    std::string to_string();
};


#endif //CH10INHERITFA22_FOOD_H
