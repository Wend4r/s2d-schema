#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class TestHullMode_t : uint32_t
{
	TEST_HULL_EVER_PASSABLE = 0x0,
	TEST_HULL_CURRENTLY_PASSABLE = 0x1,
};

