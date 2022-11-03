//
// Created by hloi on 11/3/2022.
//

#ifndef CH10INHERITFA22_PRODUCEITEM_H
#define CH10INHERITFA22_PRODUCEITEM_H
#include "GenericItem.h"
#include <string>

class ProduceItem : public GenericItem {
private:
    std::string expirationDate;
public:

    ProduceItem();

    ProduceItem(std::string name, int quantity, std::string expirationDate);

    const std::string &getExpirationDate() const;

    void setExpirationDate(const std::string &expirationDate);
};


#endif //CH10INHERITFA22_PRODUCEITEM_H
