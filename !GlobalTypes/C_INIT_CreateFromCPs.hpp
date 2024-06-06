#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x328
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateFromCPs : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point increment amount"
	int32_t m_nIncrement; // 0x1c0	
	// MPropertyFriendlyName "starting control point"
	int32_t m_nMinCP; // 0x1c4	
	// MPropertyFriendlyName "ending control point"
	// MParticleMinVersion "2"
	int32_t m_nMaxCP; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
public:
	// MPropertyFriendlyName "dynamic control point count"
	CParticleCollectionFloatInput m_nDynamicCPCount; // 0x1d0	
};

