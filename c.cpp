nclude <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <iostream>

int main()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(4);
	vec.push_back(7);
	vec.push_back(4);
	vec.push_back(9);
	vec.push_back(7);

	std::ostringstream oss;

	if (!vec.empty())
	{
		// Convert all but the last element to avoid a trailing ","
		std::copy(vec.begin(), vec.end()-1,std::ostream_iterator<int>(oss, ","));

		//                 // Now add the last element with no delimiter
		oss << vec.back();
	}

	std::cout << oss.str() << std::endl;
}
