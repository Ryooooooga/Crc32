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
#include "../../../Bell/Hash/Crc32.hpp"

TEST(Bell_Hash_Crc32, Crc32)
{
	using namespace std;
	using namespace Bell::Hash::Crc32;
	
	vector<uint8_t> a;	//	[0, 1, ... 255]
	vector<uint8_t> b;	//	[255, ... 1, 0]
	vector<uint8_t> c;	//	[a..., b...]
	
	a.resize(256);
	b.resize(256);
	
	iota(a. begin(), a. end(), 0);
	iota(b.rbegin(), b.rend(), 0);
	
	c.insert(c.end(), a.begin(), a.end());
	c.insert(c.end(), b.begin(), b.end());
	
	EXPECT_EQ(0x29058c73, crc32(a));
	EXPECT_EQ(0xda3ba10a, crc32(b));
	EXPECT_EQ(0xef5f180f, crc32(c));
	EXPECT_EQ(0xef5f180f, crc32(b, crc32(a)));
}
