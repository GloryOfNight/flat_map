#include "flat_map.hxx"

#include <cstdint>
#include <string>

bool test_insertOrAssign()
{
	std::flat_map<std::string, int32_t> map{};
	map.insert_or_assign({"hello", 123});
	map.insert_or_assign({"hello", 321});
	const auto mapFind = map.find("hello");
	if (mapFind == map.end())
		return false;
	return map.size() == 1 && mapFind->second == 321;
}

int main()
{
	if (!test_insertOrAssign())
		return 1;
	return 0;
}