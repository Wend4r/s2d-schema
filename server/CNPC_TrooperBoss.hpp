#pragma once

#include <cstdint>

struct CCitadelPlayerClipComponent;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1bd0
// Has VTable
// 
// MNetworkVarNames "CCitadelPlayerClipComponent::Storage_t m_CCitadelPlayerClipComponent"
// MNetworkVarNames "GameTime_t m_flFadeOutStart"
// MNetworkVarNames "GameTime_t m_flFadeOutEnd"
class CNPC_TrooperBoss : public CNPC_Trooper
{
private:
	[[maybe_unused]] uint8_t __pad19b8[0x18]; // 0x19b8
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelPlayerClipComponent"
	// MNetworkAlias "CCitadelPlayerClipComponent"
	// MNetworkTypeAlias "CCitadelPlayerClipComponent"
	CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // 0x19d0	
private:
	[[maybe_unused]] uint8_t __pad19f0[0x8]; // 0x19f0
public:
	LaneSide_t m_LaneSide; // 0x19f8	
private:
	[[maybe_unused]] uint8_t __pad19f9[0x1cf]; // 0x19f9
public:
	// MNetworkEnable
	GameTime_t m_flFadeOutStart; // 0x1bc8	
	// MNetworkEnable
	GameTime_t m_flFadeOutEnd; // 0x1bcc	
};

