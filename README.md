# CRC-32

# Examples
```cpp
using namespace Bell::Crc32;

std::vector<std::uint8_t> a;
a.resize(256);
iota(a.begin(), a.end(), 0);	//	[0, 1, ... 255]

EXPECT_EQ(0x29058c73, crc32(a));
```

# License
CRC-32 is distributed under the [Boost Software License, Version 1.0](http://www.boost.org/LICENSE_1_0.txt).
