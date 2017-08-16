#include "fun.h"
#include <cmath>
int sum(int a, int b)
{
	return  a + b;
}
int max(int j, int i)
{
	if (j>i)
	{
		return j;
	}
	else if (i > j)
	{
		return i;
	}
	else if (i == j)
	{
		return i;
	}
}
int clamp(int min, int max, int c)
{
	if (c < min)
	{
		return min;
	}
	else if (c > max)
	{
		return max;
	}
	else if (c == max)
	{
		return c;
	}
	else if (c == min)
	{
		return c;
	}
	else
	{
		return c;
	}
}
float distance(float x, float y, float y2, float x2)
{
	return sqrtf(((x2 - x)* (x2 - x) + (y2 - y)* (y2 - y)));
}
int min(int n, int m)
{
	if (n<m)
	{
		return n;
	}
	else if (m<n)
	{
		return m;
	}
	else if (m == n)
	{
		return m;
	}
}