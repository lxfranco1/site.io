#include <iostream>
#include <iomanip>
#include "temperature.h"

using namespace std;

int main()
{
Temperature t1;		// should default to 0 Celsius
   Temperature t2(0, 'f');  // should init to 34.5 Fahrenheit 
	
t2.Increment(5,'c');

return 0;
}
