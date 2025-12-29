#include "flat_map.hxx"

#include <cstdint>
#include <string>

bool test_operatorBrackets()
{
	std::flat_map<std::string, int32_t> map{};
	const auto& value = map["hello"];
	map["hello"] = 123;
	return value == 123;
}

int main()
{
	if (!test_operatorBrackets())
		return 1;
	return 0;
}