#pragma once

#include <cstdint>

struct GameTime_t;
struct TimedEvent;
struct CFireOverlay;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5e0
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
	int32_t m_nFlameModelIndex; // 0x578	
	// MNetworkEnable
	int32_t m_nFlameFromAboveModelIndex; // 0x57c	
	float m_flScaleRegister; // 0x580	
	float m_flScaleStart; // 0x584	
	float m_flScaleEnd; // 0x588	
	GameTime_t m_flScaleTimeStart; // 0x58c	
	GameTime_t m_flScaleTimeEnd; // 0x590	
	float m_flChildFlameSpread; // 0x594	
private:
	[[maybe_unused]] uint8_t __pad0598[0x10]; // 0x598
public:
	float m_flClipPerc; // 0x5a8	
	bool m_bClipTested; // 0x5ac	
	bool m_bFadingOut; // 0x5ad	
private:
	[[maybe_unused]] uint8_t __pad05ae[0x2]; // 0x5ae
public:
	TimedEvent m_tParticleSpawn; // 0x5b0	
	CFireOverlay* m_pFireOverlay; // 0x5b8	
};

