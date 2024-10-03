#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocSyncEventIndexConditionNode : public CNmGraphDocFlowNode
{
public:
	CNmSyncEventIndexConditionNode::TriggerMode_t m_triggerMode; // 0xf8	
private:
	[[maybe_unused]] uint8_t __pad00f9[0x3]; // 0xf9
public:
	int32_t m_nSyncEventIdx; // 0xfc	
};

