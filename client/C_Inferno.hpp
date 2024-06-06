#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x82d0
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
	[[maybe_unused]] uint8_t __pad0cc8[0x40]; // 0xcc8
public:
	ParticleIndex_t m_nfxFireDamageEffect; // 0xd08	
private:
	[[maybe_unused]] uint8_t __pad0d0c[0x4]; // 0xd0c
public:
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoPointsSnapshot; // 0xd10	
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoFillerPointsSnapshot; // 0xd18	
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoOutlinePointsSnapshot; // 0xd20	
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoClimbingOutlinePointsSnapshot; // 0xd28	
	CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoDecalsSnapshot; // 0xd30	
	// MNetworkEnable
	Vector m_firePositions[64]; // 0xd38	
	// MNetworkEnable
	Vector m_fireParentPositions[64]; // 0x1038	
	// MNetworkEnable
	bool m_bFireIsBurning[64]; // 0x1338	
	// MNetworkEnable
	Vector m_BurnNormal[64]; // 0x1378	
	// MNetworkEnable
	int32_t m_fireCount; // 0x1678	
	// MNetworkEnable
	int32_t m_nInfernoType; // 0x167c	
	// MNetworkEnable
	float m_nFireLifetime; // 0x1680	
	// MNetworkEnable
	bool m_bInPostEffectTime; // 0x1684	
private:
	[[maybe_unused]] uint8_t __pad1685[0x3]; // 0x1685
public:
	int32_t m_lastFireCount; // 0x1688	
	// MNetworkEnable
	int32_t m_nFireEffectTickBegin; // 0x168c	
private:
	[[maybe_unused]] uint8_t __pad1690[0x6c00]; // 0x1690
public:
	int32_t m_drawableCount; // 0x8290	
	bool m_blosCheck; // 0x8294	
private:
	[[maybe_unused]] uint8_t __pad8295[0x3]; // 0x8295
public:
	int32_t m_nlosperiod; // 0x8298	
	float m_maxFireHalfWidth; // 0x829c	
	float m_maxFireHeight; // 0x82a0	
	Vector m_minBounds; // 0x82a4	
	Vector m_maxBounds; // 0x82b0	
	float m_flLastGrassBurnThink; // 0x82bc	
};

