#pragma once

#include <cstdint>

struct CAnimParamHandle;
struct CAnimInputDamping;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
class CBlendUpdateNode : public CAnimUpdateNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	CUtlVector< CAnimUpdateNodeRef > m_children; // 0x60	
	CUtlVector< uint8 > m_sortedOrder; // 0x78	
	CUtlVector< float32 > m_targetValues; // 0x90	
private:
	[[maybe_unused]] uint8_t __pad00a8[0x4]; // 0xa8
public:
	AnimValueSource m_blendValueSource; // 0xac	
	CAnimParamHandle m_paramIndex; // 0xb0	
private:
	[[maybe_unused]] uint8_t __pad00b2[0x6]; // 0xb2
public:
	CAnimInputDamping m_damping; // 0xb8	
	BlendKeyType m_blendKeyType; // 0xc8	
	bool m_bLockBlendOnReset; // 0xcc	
	bool m_bSyncCycles; // 0xcd	
	bool m_bLoop; // 0xce	
	bool m_bLockWhenWaning; // 0xcf	
};

