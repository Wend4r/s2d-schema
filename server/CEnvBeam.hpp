#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x898
// Has VTable
class CEnvBeam : public CBeam
{
public:
	int32_t m_active; // 0x7f0	
private:
	[[maybe_unused]] uint8_t __pad07f4[0x4]; // 0x7f4
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_spriteTexture; // 0x7f8	
	CUtlSymbolLarge m_iszStartEntity; // 0x800	
	CUtlSymbolLarge m_iszEndEntity; // 0x808	
	float m_life; // 0x810	
	float m_boltWidth; // 0x814	
	float m_noiseAmplitude; // 0x818	
	int32_t m_speed; // 0x81c	
	float m_restrike; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0824[0x4]; // 0x824
public:
	CUtlSymbolLarge m_iszSpriteName; // 0x828	
	int32_t m_frameStart; // 0x830	
	Vector m_vEndPointWorld; // 0x834	
	Vector m_vEndPointRelative; // 0x840	
	float m_radius; // 0x84c	
	Touch_t m_TouchType; // 0x850	
private:
	[[maybe_unused]] uint8_t __pad0854[0x4]; // 0x854
public:
	CUtlSymbolLarge m_iFilterName; // 0x858	
	CHandle< CBaseEntity > m_hFilter; // 0x860	
private:
	[[maybe_unused]] uint8_t __pad0864[0x4]; // 0x864
public:
	CUtlSymbolLarge m_iszDecal; // 0x868	
	CEntityIOOutput m_OnTouchedByEntity; // 0x870	
	
	// Datamap fields:
	// int32_t m_nClipStyle; // 0x7d4
	// void CEnvBeamStrikeThink; // 0x0
	// void CEnvBeamUpdateThink; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// void InputStrikeOnce; // 0x0
};

