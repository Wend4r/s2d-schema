#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x890
// Has VTable
class CEnvBeam : public CBeam
{
public:
	int32_t m_active; // 0x7e8	
private:
	[[maybe_unused]] uint8_t __pad07ec[0x4]; // 0x7ec
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture; // 0x7f0	
	CUtlSymbolLarge m_iszStartEntity; // 0x7f8	
	CUtlSymbolLarge m_iszEndEntity; // 0x800	
	float m_life; // 0x808	
	float m_boltWidth; // 0x80c	
	float m_noiseAmplitude; // 0x810	
	int32_t m_speed; // 0x814	
	float m_restrike; // 0x818	
private:
	[[maybe_unused]] uint8_t __pad081c[0x4]; // 0x81c
public:
	CUtlSymbolLarge m_iszSpriteName; // 0x820	
	int32_t m_frameStart; // 0x828	
	Vector m_vEndPointWorld; // 0x82c	
	Vector m_vEndPointRelative; // 0x838	
	float m_radius; // 0x844	
	Touch_t m_TouchType; // 0x848	
private:
	[[maybe_unused]] uint8_t __pad084c[0x4]; // 0x84c
public:
	CUtlSymbolLarge m_iFilterName; // 0x850	
	CHandle< CBaseEntity > m_hFilter; // 0x858	
private:
	[[maybe_unused]] uint8_t __pad085c[0x4]; // 0x85c
public:
	CUtlSymbolLarge m_iszDecal; // 0x860	
	CEntityIOOutput m_OnTouchedByEntity; // 0x868	
	
	// Datamap fields:
	// int32_t m_nClipStyle; // 0x7cc
	// void CEnvBeamStrikeThink; // 0x0
	// void CEnvBeamUpdateThink; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// void InputStrikeOnce; // 0x0
};

