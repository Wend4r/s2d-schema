#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x98
// Has VTable
// 
// MGetKV3ClassDefaults
class CSubtractUpdateNode : public CBinaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0088[0x4]; // 0x88
public:
	BinaryNodeChildOption m_footMotionTiming; // 0x8c	
	bool m_bApplyToFootMotion; // 0x90	
	bool m_bApplyChannelsSeparately; // 0x91	
	bool m_bUseModelSpace; // 0x92	
};

