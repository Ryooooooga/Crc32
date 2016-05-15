//=====================================================================
// Copyright (c) 2015-2016 Ryooooooga.
// https://github.com/Ryooooooga
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=====================================================================

#pragma once

#include <cstdint>
#include "../ArrayView.hpp"

namespace Bell { namespace Hash { namespace Crc64 {

	using Crc64Digest = std::uint64_t;

	/**
	 * @brief      CRC-64
	 *
	 * @param[in]  bytes  CRC-64 を求めるバイト配列
	 * @param[in]  crc    CRC-64 の初期値
	 *
	 * @return     CRC-64
	 */
	Crc64Digest crc64(ArrayView<std::uint8_t> bytes, Crc64Digest crc = 0) noexcept;

}}}	//	namespace Bell::Hash::Crc32
