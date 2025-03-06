#pragma once

#include <cstdint>

struct CAnimInputDamping;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MGetKV3ClassDefaults
class CDirectionalBlendUpdateNode : public CLeafUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x4]; // 0x58
public:
	HSequence m_hSequences[8]; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad007c[0x4]; // 0x7c
public:
	CAnimInputDamping m_damping; // 0x80	
	AnimValueSource m_blendValueSource; // 0x98	
	CAnimParamHandle m_paramIndex; // 0x9c	
private:
	[[maybe_unused]] uint8_t __pad009e[0x2]; // 0x9e
public:
	float m_playbackSpeed; // 0xa0	
	float m_duration; // 0xa4	
	bool m_bLoop; // 0xa8	
	bool m_bLockBlendOnReset; // 0xa9	
};

