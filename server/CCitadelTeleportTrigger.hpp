#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9a0
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
	[[maybe_unused]] uint8_t __pad094c[0x24]; // 0x94c
public:
	CUtlSymbolLarge m_strExitPoint; // 0x970	
	CEntityIOOutput m_OnTeleport; // 0x978	
	
	// Datamap fields:
	// void m_pEntExit; // 0x950
};

