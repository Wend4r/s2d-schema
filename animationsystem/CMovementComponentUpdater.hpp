#pragma once

#include <cstdint>

struct CAnimInputDamping;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xb8
// Has VTable
// 
// MGetKV3ClassDefaults
class CMovementComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CSmartPtr< CAnimMotorUpdaterBase > > m_motors; // 0x30	
	CAnimInputDamping m_facingDamping; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0060[0x8]; // 0x60
public:
	int32_t m_nDefaultMotorIndex; // 0x68	
	float m_flDefaultRunSpeed; // 0x6c	
	bool m_bMoveVarsDisabled; // 0x70	
	bool m_bNetworkPath; // 0x71	
	bool m_bNetworkFacing; // 0x72	
	CAnimParamHandle m_paramHandles[34]; // 0x73	
};

