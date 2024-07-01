#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'modellib')
// Alignment: 16
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
class CAimConstraint : public CBaseConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	Quaternion m_qAimOffset; // 0x70	
	uint32_t m_nUpType; // 0x80	
};

