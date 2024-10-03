#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x110
// 
// MGetKV3ClassDefaults
class CNmIKRigDocument
{
public:
	CResourceName m_skeleton; // 0x0	
	CUtlVector< CNmIKRigLink* > m_links; // 0xe0	
	CUtlVector< CNmIKRigTarget > m_targets; // 0xf8	
};

