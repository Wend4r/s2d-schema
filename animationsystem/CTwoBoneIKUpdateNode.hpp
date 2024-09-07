#pragma once

#include <cstdint>

struct TwoBoneIKSettings_t;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CTwoBoneIKUpdateNode : public CUnaryUpdateNode
{
private:
	[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
public:
	TwoBoneIKSettings_t m_opFixedData; // 0x70	
};

