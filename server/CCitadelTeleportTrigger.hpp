#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x980
// Has VTable
// 
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "Vector m_vExitOrigin"
class CCitadelTeleportTrigger : public CTriggerModifier
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x928	
	// MNetworkEnable
	Vector m_vExitOrigin; // 0x940	
private:
	[[maybe_unused]] uint8_t __pad094c[0x4]; // 0x94c
public:
	CUtlSymbolLarge m_strExitPoint; // 0x950	
	CEntityIOOutput m_OnTeleport; // 0x958	
	
	// Datamap fields:
	// void m_pEntExit; // 0x94c
};

