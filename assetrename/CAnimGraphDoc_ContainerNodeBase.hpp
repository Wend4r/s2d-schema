#pragma once

#include <cstdint>

struct AnimNodeID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x70
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_ContainerNodeBase : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
public:
	// MPropertyHideField
	AnimNodeID m_inputNodeID; // 0x48	
	// MPropertyHideField
	AnimNodeID m_outputNodeID; // 0x4c	
	// MPropertyHideField
	CUtlHashtable< AnimNodeOutputID, CAnimGraphDoc_NodeConnection > m_inputConnectionMap; // 0x50	
};

