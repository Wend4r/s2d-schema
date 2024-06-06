#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Mixer Audio Node"
// MPropertyDescription "Mixes audio tracks together into a single track.  Mix levels can be automated."
class CMixSum : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Volume:1"
	float m_flVolume1; // 0x20	
	// MPropertyFriendlyName "Volume:2"
	float m_flVolume2; // 0x24	
	// MPropertyFriendlyName "Volume:3"
	float m_flVolume3; // 0x28	
	// MPropertyFriendlyName "Volume:4"
	float m_flVolume4; // 0x2c	
	// MPropertyFriendlyName "Volume:5"
	float m_flVolume5; // 0x30	
	// MPropertyFriendlyName "Volume:6"
	float m_flVolume6; // 0x34	
	// MPropertyFriendlyName "Volume:7"
	float m_flVolume7; // 0x38	
	// MPropertyFriendlyName "Volume:8"
	float m_flVolume8; // 0x3c	
	// MPropertyFriendlyName "Channel Name"
	CUtlString m_channelName[8]; // 0x40	
};

