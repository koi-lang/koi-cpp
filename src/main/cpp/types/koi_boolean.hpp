#ifndef KOICORE_KOI_BOOLEAN_HPP
#define KOICORE_KOI_BOOLEAN_HPP

#include <iostream>
using namespace std;

#include "../koi_object.hpp"

class KoiBoolean : public KoiObject {
public:
    bool value = value;

    KoiBoolean(bool value);
};

#endif //KOICORE_KOI_BOOLEAN_HPP
