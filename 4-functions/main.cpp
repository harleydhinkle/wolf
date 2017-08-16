#include <iostream>
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

	std::cout << min(a, b)<<std::endl;
	system("pause");
	clamp(22,33,55);
	int d, c;
	std::cout << "Enter two numbers: ";
	std::cin >> d >> c;
	std::cout << max(d, c) << std::endl;
	print2(4,5);
	std::cout << sum(3, 6, 7) << std::endl;
	system("pause");
		return 0;
}