#include "flat_map.hxx"

#include <cstdint>
#include <string>

bool test_erase()
{
	std::flat_map<std::string, int32_t> map{};
	map.emplace("hello", 123);
	map.emplace("hello", 321);

	auto it = map.find("hello");
	if (it != map.end())
	{
		map.erase(it);
	}

	return map.size() == 0;
}

int main()
{
	if (!test_erase())
		return 1;
	return 0;
}