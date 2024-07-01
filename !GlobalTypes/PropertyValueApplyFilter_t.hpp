#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class PropertyValueApplyFilter_t : uint32_t
{
	EApplyFilter_None = 0x0,
	EApplyFilter_OnlyIfImbued = 0x1,
	EApplyFilter_OnlyIfNonImbued = 0x2,
	EApplyFilter_OnlyIfHasCharges = 0x3,
};

