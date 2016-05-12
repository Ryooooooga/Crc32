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

namespace Bell { namespace Crc32 {

	using Crc32Digest = std::uint32_t;

	/**
	 * @brief      CRC-32
	 *
	 * @param[in]  bytes  CRC-32 を求めるバイト配列
	 * @param[in]  crc    CRC-32 の初期値
	 *
	 * @return     CRC-32
	 */
	Crc32Digest crc32(ArrayView<std::uint8_t> bytes, Crc32Digest crc = 0) noexcept;

}}	//	namespace Bell::Crc32
