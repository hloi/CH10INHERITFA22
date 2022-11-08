//
// Created by hloi on 11/3/2022.
//

#ifndef CH10INHERITFA22_GENERICITEM_H
#define CH10INHERITFA22_GENERICITEM_H

#include <string>

class GenericItem {
public:
    explicit GenericItem(const std::string &name);


private:
    std::string name;
    int quantity;
public:

    GenericItem();

    GenericItem(std::string name, int quantity);

    const std::string &getName() const;

    void setName(const std::string &name);

    int getQuantity() const;

    void setQuantity(int quantity);

    std::string to_string();


};


#endif //CH10INHERITFA22_GENERICITEM_H
