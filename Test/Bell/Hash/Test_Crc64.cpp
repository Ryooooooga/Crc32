//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#include <numeric>
#include <gtest/gtest.h>
#include "../../../Bell/Hash/Crc64.hpp"

TEST(Bell_Hash_Crc64, Crc64)
{
	using namespace std;
	using namespace Bell::Hash::Crc64;
	
	vector<uint8_t> a;	//	[0, 1, ... 255]
	vector<uint8_t> b;	//	[255, ... 1, 0]
	vector<uint8_t> c;	//	[a..., b...]

	a.resize(256);
	b.resize(256);
	
	iota(a. begin(), a. end(), 0);
	iota(b.rbegin(), b.rend(), 0);
	
	c.insert(c.end(), a.begin(), a.end());
	c.insert(c.end(), b.begin(), b.end());

	EXPECT_EQ(0x72414b2f65db3ab0, crc64(a));
	EXPECT_EQ(0x0c612f81722d72bb, crc64(b));
	EXPECT_EQ(0xac18a3bd5664cd6c, crc64(c));
	EXPECT_EQ(0xac18a3bd5664cd6c, crc64(b, crc64(a)));
}
