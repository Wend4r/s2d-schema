#pragma once

#include <cstdint>

struct AimMatrixOpFixedSettings_t;
struct CAnimParamHandle;
struct HSequence;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0x170
// Has VTable
// 
// MGetKV3ClassDefaults
class CAimMatrixUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	AimMatrixOpFixedSettings_t m_opFixedSettings; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0150[0x8]; // 0x150
public:
	AnimVectorSource m_target; // 0x158	
	CAnimParamHandle m_paramIndex; // 0x15c	
private:
	[[maybe_unused]] uint8_t __pad015e[0x2]; // 0x15e
public:
	HSequence m_hSequence; // 0x160	
	bool m_bResetChild; // 0x164	
	bool m_bLockWhenWaning; // 0x165	
};

