#include <iostream>
#include <cmath>
void PrintHelloFunctions()
{
	std::cout << "Hello Functions" << std::endl;
}
int pos2(int a); 
float frac(int num, int den);

float LargestDifference(float a, float b, float c);

//proble 2
void print2(int a , int b)
{
	std::cout << a <<","<< b << std::endl;
}
 int sum(int k , int g , int y) 
{
	return k + g + y;
}
 //1 min
  int min(int n, int m) 
 {
	if(n<m)
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
  float distance (float x , float y , float y2 , float x2)
  {
	  return sqrtf(((x2 - x)* (x2 - x) + (y2 - y)* (y2 - y)));
  }
  float eta(float x, float y ,float x2 ,float y2 ,float unitsPerSec) 
  {
	  return distance(x, y, x2, y2) / unitsPerSec;
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
	  else if(c > max)
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

  int main()
  {
	  PrintHelloFunctions();
	  int a, b;
	  std::cout << "Enter two numbers: ";
	  std::cin >> a >> b;
	  std::cout << min(a, b) << std::endl;
	  system("pause");
	  int d, c;
	  std::cout << "Enter two numbers: ";
	  std::cin >> d >> c;
	  std::cout << max(d, c) << std::endl;
	  system("pause");
	  int f, g, k;
	  std::cout << "Enter three numbers: ";
	  std::cin >> f >> g >> k;
	  std::cout << clamp(f,g,k) << std::endl;
	  system("pause");
	  print2(4, 5);
	  system("pause");
	  std::cout << sum(3, 6, 7) << std::endl;
	  system("pause");
	  std::cout << distance(7, 23, 9, 0) << std::endl;
	  system("pause");
	  std::cout << eta(4, 4, 4, 8, 4) << std::endl;
	  system("pause");
	  return 0;
  }
