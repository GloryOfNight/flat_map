#include "flat_map.hxx"

#include <cstdint>
#include <string>

bool test_erase_if()
{
	std::flat_map<int32_t, int32_t> map{};
	map.emplace(7, 1);
	map.emplace(6, 0);
	map.emplace(5, 1);
	map.emplace(4, 0);
	map.emplace(3, 0);
	map.emplace(2, 1);
	map.emplace(1, 1);
	map.emplace(0, 0);

	std::erase_if(map, [](const auto& pair)
		{ return pair.second == 1; });

	return map.size() == 4;
}

int main()
{
	if (!test_erase_if())
		return 1;
	return 0;
}