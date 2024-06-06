#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class eSplinePushType : uint32_t
{
	// MPropertyFriendlyName "Along Spline Direction"
	k_eSplinePushAlong = 0x0,
	// MPropertyFriendlyName "Away from closest point"
	k_eSplinePushAway = 0x1,
	// MPropertyFriendlyName "Towards closest point"
	k_eSplinePushTowards = 0x2,
};

