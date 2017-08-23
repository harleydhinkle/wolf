#include "vector2d.h"
#include <cmath>

vetior2d sum(vetior2d a, vetior2d b)
{
	float xSum = a.x + b.x;
	float ySum = a.y + b.y;
	return{ xSum, ySum };
}

vetior2d diff(vetior2d a, vetior2d b)
{
	float xSum = a.x - b.x;
	float ySum = a.y - b.y;
	return{ xSum, ySum };
}

float dist(vetior2d a, vetior2d b)
{
	return sqrtf(((b.x - a.x)* (b.x - a.x) + (b.y- b.y)* (b.y - a.y)));
}
