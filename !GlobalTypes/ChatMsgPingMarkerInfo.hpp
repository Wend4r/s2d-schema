#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ChatMsgPingMarkerInfo : uint32_t
{
	// MPropertyFriendlyName "Show Ping Indicator at Ping Location, Play Ping Sound, and Play VO"
	k_EPingMarkerInfo_ShowMarkerAndSound = 0x0,
	// MPropertyFriendlyName "Show Ping Indicator on Pinging Player, Play Ping Sound, and Play VO"
	k_EPingMarkerInfo_ShowMarkerOnSender = 0x1,
	// MPropertyFriendlyName "No Marker or Sound (just VO)"
	k_EPingMarkerInfo_HideMarkerAndSound = 0x2,
	// MPropertyFriendlyName "Only Show Ping Indicator at Ping Location (no ping sound)"
	k_EPingMarkerInfo_OnlyShowMarker = 0x3,
	// MPropertyFriendlyName "Only Play Ping Sound (and VO)"
	k_EPingMarkerInfo_OnlyPlaySound = 0x4,
};

