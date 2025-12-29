#define FLAT_MAP_NAMESPACE test
#include "flat_map.hxx"

#include <cstdint>
#include <string>

int main()
{
	test::flat_map<std::string, int32_t> map{};
	
	map.emplace("hello", 123);
	map.erase("hello");

	map.insert({"hello2", 133});
	map.clear();

	map.size();
	map.max_size();
	map.empty();

	return 0;
}