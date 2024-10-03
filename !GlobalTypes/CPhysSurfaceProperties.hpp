#pragma once

#include <cstdint>

struct CPhysSurfacePropertiesPhysics;
struct CPhysSurfacePropertiesSoundNames;
struct CPhysSurfacePropertiesAudio;
// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 8
// Size: 0xc8
// 
// MGetKV3ClassDefaults
class CPhysSurfaceProperties
{
public:
	// MKV3TransferName "surfacePropertyName"
	CUtlString m_name; // 0x0	
	uint32_t m_nameHash; // 0x8	
	uint32_t m_baseNameHash; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad0010[0x8]; // 0x10
public:
	// MKV3TransferName "hidden"
	bool m_bHidden; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x7]; // 0x19
public:
	// MKV3TransferName "description"
	CUtlString m_description; // 0x20	
	// MKV3TransferName "physics"
	CPhysSurfacePropertiesPhysics m_physics; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	// MKV3TransferName "audiosounds"
	// -> m_impactSoft - 0x50
	// -> m_impactHard - 0x58
	// -> m_scrapeSmooth - 0x60
	// -> m_scrapeRough - 0x68
	// -> m_bulletImpact - 0x70
	// -> m_rolling - 0x78
	// -> m_break - 0x80
	// -> m_strain - 0x88
	// -> m_meleeImpact - 0x90
	// -> m_pushOff - 0x98
	// -> m_skidStop - 0xa0
	CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x50	
	// MKV3TransferName "audioparams"
	CPhysSurfacePropertiesAudio m_audioParams; // 0xa8	
};

