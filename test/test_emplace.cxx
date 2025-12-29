#include "flat_map.hxx"

#include <cstdint>
#include <string>

bool test_emplace()
{
	std::flat_map<std::string, int32_t> map{};
	map.emplace("hello", 123);
	map.emplace("hello", 321);
	const auto mapFind = map.find("hello");
	if (mapFind == map.end())
		return false;
	return map.size() == 1 && mapFind->second == 123;
}

int main()
{
	if (!test_emplace())
		return 1;
	return 0;
}