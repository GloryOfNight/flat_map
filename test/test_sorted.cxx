#include "flat_map.hxx"

#include <cstdint>
#include <string>

bool test_isSortedKeys()
{
	std::flat_map<int32_t, int32_t> map{};
	map.emplace(3, 3);
	map.emplace(2, 2);
	map.emplace(1, 1);
	map.emplace(5, 5);
	map.emplace(9, 9);
	map.emplace(4, 4);

	return std::is_sorted(map.keys().begin(), map.keys().end());
}

int main()
{
	if (!test_isSortedKeys())
		return 1;
	return 0;
}