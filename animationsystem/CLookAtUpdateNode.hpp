#pragma once

#include <cstdint>

struct LookAtOpFixedSettings_t;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0x150
// Has VTable
// 
// MGetKV3ClassDefaults
class CLookAtUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	LookAtOpFixedSettings_t m_opFixedSettings; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0130[0x8]; // 0x130
public:
	AnimVectorSource m_target; // 0x138	
	CAnimParamHandle m_paramIndex; // 0x13c	
	CAnimParamHandle m_weightParamIndex; // 0x13e	
	bool m_bResetChild; // 0x140	
	bool m_bLockWhenWaning; // 0x141	
};

