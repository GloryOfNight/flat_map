#include "flat_map.hxx"

#include <cstdint>
#include <string>

bool test_at()
{
	std::flat_map<std::string, int32_t> map{};
	map.emplace("hello", 123);
	map.at("hello") = 321;
	const auto& value = map.at("hello");
	return value == 321;
}

int main()
{
	if (!test_at())
		return 1;
	return 0;
}