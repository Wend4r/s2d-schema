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
	[[maybe_unused]] uint8_t __pad0d28[0x40]; // 0xd28
public:
	ParticleIndex_t m_nfxFireDamageEffect; // 0xd68	
private:
	[[maybe_unused]] uint8_t __pad0d6c[0x4]; // 0xd6c
public:
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoPointsSnapshot; // 0xd70	
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoFillerPointsSnapshot; // 0xd78	
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoOutlinePointsSnapshot; // 0xd80	
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoClimbingOutlinePointsSnapshot; // 0xd88	
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoDecalsSnapshot; // 0xd90	
	// MNetworkEnable
	Vector m_firePositions[64]; // 0xd98	
	// MNetworkEnable
	Vector m_fireParentPositions[64]; // 0x1098	
	// MNetworkEnable
	bool m_bFireIsBurning[64]; // 0x1398	
	// MNetworkEnable
	Vector m_BurnNormal[64]; // 0x13d8	
	// MNetworkEnable
	int32_t m_fireCount; // 0x16d8	
	// MNetworkEnable
	int32_t m_nInfernoType; // 0x16dc	
	// MNetworkEnable
	float m_nFireLifetime; // 0x16e0	
	// MNetworkEnable
	bool m_bInPostEffectTime; // 0x16e4	
private:
	[[maybe_unused]] uint8_t __pad16e5[0x3]; // 0x16e5
public:
	int32_t m_lastFireCount; // 0x16e8	
	// MNetworkEnable
	int32_t m_nFireEffectTickBegin; // 0x16ec	
private:
	[[maybe_unused]] uint8_t __pad16f0[0x6c00]; // 0x16f0
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

