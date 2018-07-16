#ifndef KOICORE_KOI_OBJECT_HPP
#define KOICORE_KOI_OBJECT_HPP

#include <iostream>
using namespace std;

class KoiObject {
public:
    KoiObject() = default;

    virtual bool to_bool() = 0;
    virtual char to_char() = 0;
    virtual int to_int() = 0;
    virtual string to_str() = 0;
};

#endif //KOICORE_KOI_OBJECT_HPP
