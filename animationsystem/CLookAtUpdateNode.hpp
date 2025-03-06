#pragma once

#include <cstdint>

struct LookAtOpFixedSettings_t;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0x160
// Has VTable
// 
// MGetKV3ClassDefaults
class CLookAtUpdateNode : public CUnaryUpdateNode
{
public:
	LookAtOpFixedSettings_t m_opFixedSettings; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0140[0x8]; // 0x140
public:
	AnimVectorSource m_target; // 0x148	
	CAnimParamHandle m_paramIndex; // 0x14c	
	CAnimParamHandle m_weightParamIndex; // 0x14e	
	bool m_bResetChild; // 0x150	
	bool m_bLockWhenWaning; // 0x151	
};

