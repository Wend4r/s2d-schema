#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
struct RnShapeDesc_t
{
public:
	uint32_t m_nCollisionAttributeIndex; // 0x0	
	uint32_t m_nSurfacePropertyIndex; // 0x4	
	CUtlString m_UserFriendlyName; // 0x8	
	bool m_bUserFriendlyNameSealed; // 0x10	
	bool m_bUserFriendlyNameLong; // 0x11	
private:
	[[maybe_unused]] uint8_t __pad0012[0x2]; // 0x12
public:
	uint32_t m_nToolMaterialHash; // 0x14	
};

