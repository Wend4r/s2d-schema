#pragma once

#include <cstdint>

struct CAnimInputDamping;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MGetKV3ClassDefaults
class CMovementComponentUpdater : public CAnimComponentUpdater
{
public:
	CUtlVector< CSmartPtr< CAnimMotorUpdaterBase > > m_motors; // 0x30	
	CAnimInputDamping m_facingDamping; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	int32_t m_nDefaultMotorIndex; // 0x60	
	float m_flDefaultRunSpeed; // 0x64	
	bool m_bMoveVarsDisabled; // 0x68	
	bool m_bNetworkPath; // 0x69	
	bool m_bNetworkFacing; // 0x6a	
	CAnimParamHandle m_paramHandles[30]; // 0x6b	
};

