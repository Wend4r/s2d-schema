#pragma once

#include <cstdint>

struct CSprite;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x810
// Has VTable
class CEnvLaser : public CBeam
{
public:
	CUtlSymbolLarge m_iszLaserTarget; // 0x7e8	
	CSprite* m_pSprite; // 0x7f0	
	CUtlSymbolLarge m_iszSpriteName; // 0x7f8	
	Vector m_firePosition; // 0x800	
	float m_flStartFrame; // 0x80c	
	
	// Datamap fields:
	// void CEnvLaserStrikeThink; // 0x0
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// float width; // 0x7fffffff
	// int32_t NoiseAmplitude; // 0x7fffffff
	// int32_t TextureScroll; // 0x7fffffff
	// CUtlString texture; // 0x7fffffff
};

