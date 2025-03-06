#pragma once

#include <cstdint>

struct GameTime_t;
struct TimedEvent;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x580
// Has VTable
// 
// MNetworkOverride "m_flScale"
// MNetworkOverride "m_flScaleTime"
// MNetworkVarNames "int32 m_nFlameModelIndex"
// MNetworkVarNames "int32 m_nFlameFromAboveModelIndex"
class C_FireSmoke : public C_BaseFire
{
public:
	// MNetworkEnable
	int32_t m_nFlameModelIndex; // 0x520	
	// MNetworkEnable
	int32_t m_nFlameFromAboveModelIndex; // 0x524	
	float m_flScaleRegister; // 0x528	
	float m_flScaleStart; // 0x52c	
	float m_flScaleEnd; // 0x530	
	GameTime_t m_flScaleTimeStart; // 0x534	
	GameTime_t m_flScaleTimeEnd; // 0x538	
	float m_flChildFlameSpread; // 0x53c	
private:
	[[maybe_unused]] uint8_t __pad0540[0x10]; // 0x540
public:
	float m_flClipPerc; // 0x550	
	bool m_bClipTested; // 0x554	
	bool m_bFadingOut; // 0x555	
private:
	[[maybe_unused]] uint8_t __pad0556[0x2]; // 0x556
public:
	TimedEvent m_tParticleSpawn; // 0x558	
};

