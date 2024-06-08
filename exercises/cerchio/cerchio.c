#include "cerchio.h"

float circonferenza(float raggio) {
    const float piGreco = 3.1415926F;

    return 2.0F * piGreco * raggio;
}

float area(float raggio) {
    const float piGreco = 3.1415926F;

    return raggio * raggio * piGreco;
}
