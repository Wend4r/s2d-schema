#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocTargetInfoNode : public CNmGraphDocFlowNode
{
public:
	CNmTargetInfoNode::Info_t m_infoType; // 0xf8	
	bool m_bIsWorldSpaceTarget; // 0xfc	
};

