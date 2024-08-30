#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x968
// Has VTable
// 
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "string_t m_iszSoundName"
class CTriggerItemShop : public CBaseTrigger
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x938	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSoundName; // 0x950	
	Vector m_vAudioOffset; // 0x958	
};

