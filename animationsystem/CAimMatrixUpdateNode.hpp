#pragma once

#include <cstdint>

struct AimMatrixOpFixedSettings_t;
struct CAnimParamHandle;
struct HSequence;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0x180
// Has VTable
// 
// MGetKV3ClassDefaults
class CAimMatrixUpdateNode : public CUnaryUpdateNode
{
public:
	AimMatrixOpFixedSettings_t m_opFixedSettings; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0160[0x8]; // 0x160
public:
	AnimVectorSource m_target; // 0x168	
	CAnimParamHandle m_paramIndex; // 0x16c	
private:
	[[maybe_unused]] uint8_t __pad016e[0x2]; // 0x16e
public:
	HSequence m_hSequence; // 0x170	
	bool m_bResetChild; // 0x174	
	bool m_bLockWhenWaning; // 0x175	
};

