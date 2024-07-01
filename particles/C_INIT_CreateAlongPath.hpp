#pragma once

#include <cstdint>

struct CPathParameters;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x230
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateAlongPath : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "maximum distance"
	float m_fMaxDistance; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0xc]; // 0x1c4
public:
	CPathParameters m_PathParams; // 0x1d0	
	// MPropertyFriendlyName "randomly select sequential CP pairs between start and end points"
	bool m_bUseRandomCPs; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0211[0x3]; // 0x211
public:
	// MPropertyFriendlyName "Offset from control point for path end"
	// MVectorIsCoordinate
	Vector m_vEndOffset; // 0x214	
	// MPropertyFriendlyName "save offset"
	bool m_bSaveOffset; // 0x220	
};

