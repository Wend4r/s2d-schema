#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class SteamAudioOcclusionModeType_t : uint32_t
{
	// MPropertyFriendlyName "Off"
	SA_OCCLUSIONMODE_NONE = 0x0,
	// MPropertyFriendlyName "On, No Transmission"
	SA_OCCLUSIONMODE_NOTRANSMISSION = 0x1,
	// MPropertyFriendlyName "On, Frequency Independent Transmission"
	SA_OCCLUSIONMODE_FREQINDEPENDENT = 0x2,
	// MPropertyFriendlyName "On, Frequency Dependent Transmission"
	SA_OCCLUSIONMODE_FREQDEPENDENT = 0x3,
};

