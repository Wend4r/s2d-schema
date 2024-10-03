#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x8330
// Has VTable
// 
// MNetworkVarNames "Vector m_firePositions"
// MNetworkVarNames "Vector m_fireParentPositions"
// MNetworkVarNames "bool m_bFireIsBurning"
// MNetworkVarNames "Vector m_BurnNormal"
// MNetworkVarNames "int m_fireCount"
// MNetworkVarNames "int m_nInfernoType"
// MNetworkVarNames "float m_nFireLifetime"
// MNetworkVarNames "bool m_bInPostEffectTime"
// MNetworkVarNames "int m_nFireEffectTickBegin"
class C_Inferno : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0d20[0x40]; // 0xd20
public:
	ParticleIndex_t m_nfxFireDamageEffect; // 0xd60	
private:
	[[maybe_unused]] uint8_t __pad0d64[0x4]; // 0xd64
public:
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoPointsSnapshot; // 0xd68	
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoFillerPointsSnapshot; // 0xd70	
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoOutlinePointsSnapshot; // 0xd78	
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoClimbingOutlinePointsSnapshot; // 0xd80	
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoDecalsSnapshot; // 0xd88	
	// MNetworkEnable
	Vector m_firePositions[64]; // 0xd90	
	// MNetworkEnable
	Vector m_fireParentPositions[64]; // 0x1090	
	// MNetworkEnable
	bool m_bFireIsBurning[64]; // 0x1390	
	// MNetworkEnable
	Vector m_BurnNormal[64]; // 0x13d0	
	// MNetworkEnable
	int32_t m_fireCount; // 0x16d0	
	// MNetworkEnable
	int32_t m_nInfernoType; // 0x16d4	
	// MNetworkEnable
	float m_nFireLifetime; // 0x16d8	
	// MNetworkEnable
	bool m_bInPostEffectTime; // 0x16dc	
private:
	[[maybe_unused]] uint8_t __pad16dd[0x3]; // 0x16dd
public:
	int32_t m_lastFireCount; // 0x16e0	
	// MNetworkEnable
	int32_t m_nFireEffectTickBegin; // 0x16e4	
private:
	[[maybe_unused]] uint8_t __pad16e8[0x6c08]; // 0x16e8
public:
	int32_t m_drawableCount; // 0x82f0	
	bool m_blosCheck; // 0x82f4	
private:
	[[maybe_unused]] uint8_t __pad82f5[0x3]; // 0x82f5
public:
	int32_t m_nlosperiod; // 0x82f8	
	float m_maxFireHalfWidth; // 0x82fc	
	float m_maxFireHeight; // 0x8300	
	Vector m_minBounds; // 0x8304	
	Vector m_maxBounds; // 0x8310	
	float m_flLastGrassBurnThink; // 0x831c	
};

