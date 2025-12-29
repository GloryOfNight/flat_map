# std::flat_map

Standard-like implementation of std::flat_map. Implementation isn't complete, but it's should satisfy most potential use cases.

Serves as temporary code-plug until actual feature of flat_map is available to all!

Contributions are welcome!

Reference: [flat_map](https://www.en.cppreference.com/w/cpp/container/flat_map.html)

```C++
#include "flat_map.hxx"

void func()
{
  std::flat_map<int, int> map{};
  map.try_emplace(1, 2);
  auto it = map.find(1);
  map.erase(it);
}
```
