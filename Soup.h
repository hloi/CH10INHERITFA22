//
// Created by hloi on 11/3/2022.
//

#ifndef CH10INHERITFA22_SOUP_H
#define CH10INHERITFA22_SOUP_H
#include <string>
#include "Food.h"


class Soup : public Food {
private:
    std::string flavor;

public:
//    const std::string &getName() const;
//
//    void setName(const std::string &name);

    const std::string &getFlavor() const;

    void setFlavor(const std::string &flavor);


    Soup() {}
    Soup(std::string name, int quantity, std::string package, std::string flavor);

    std::string to_string();
};


#endif //CH10INHERITFA22_SOUP_H
