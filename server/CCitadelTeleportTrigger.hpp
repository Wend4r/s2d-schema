#pragma once

#include <cstdint>

struct CCitadelMinimapComponent;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9d0
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
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x948	
	// MNetworkEnable
	Vector m_vExitOrigin; // 0x960	
private:
	[[maybe_unused]] uint8_t __pad096c[0x2c]; // 0x96c
public:
	CUtlSymbolLarge m_strExitPoint; // 0x998	
	CEntityIOOutput m_OnTeleport; // 0x9a0	
	CUtlSymbolLarge m_strPropModel; // 0x9c8	
	
	// Datamap fields:
	// void m_pEntExit; // 0x970
};

