#pragma once

#include <cstdint>

struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MGetKV3ClassDefaults
class CLookComponentUpdater : public CAnimComponentUpdater
{
private:
	[[maybe_unused]] uint8_t __pad0030[0x4]; // 0x30
public:
	CAnimParamHandle m_hLookHeading; // 0x34	
	CAnimParamHandle m_hLookHeadingVelocity; // 0x36	
	CAnimParamHandle m_hLookPitch; // 0x38	
	CAnimParamHandle m_hLookDistance; // 0x3a	
	CAnimParamHandle m_hLookDirection; // 0x3c	
	CAnimParamHandle m_hLookTarget; // 0x3e	
	CAnimParamHandle m_hLookTargetWorldSpace; // 0x40	
	bool m_bNetworkLookTarget; // 0x42	
};

