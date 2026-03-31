// perimeter.c
#include "perimeter.h"
#include <math.h>

float perimeter_rect(float height, float width) {
    return 2 * (height + width);
}

float perimeter_circle(float radius){
	return 4 * M_PI * radius;
}
