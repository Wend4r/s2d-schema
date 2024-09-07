#pragma once

#include <cstdint>

struct CFeJiggleBone;
// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0xd0
// 
// MGetKV3ClassDefaults
class CFeNamedJiggleBone
{
public:
	CUtlString m_strParentBone; // 0x0	
	CTransform m_transform; // 0x10	
	uint32_t m_nJiggleParent; // 0x30	
	CFeJiggleBone m_jiggleBone; // 0x34	
};

