#include "lib.h"
float getMaxElement(float* array, float sizeOfArray) {
    float resultingMaxValue = 0;
    if (sizeOfArray > 0) {
        resultingMaxValue = array[0];

        for (int i = 0; i < sizeOfArray; ++i) {
            if (array[i] > resultingMaxValue) {
                resultingMaxValue = array[i];
            }
        }

    }
    return resultingMaxValue;
}
