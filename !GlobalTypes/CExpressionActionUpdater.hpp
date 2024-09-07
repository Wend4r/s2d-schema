#pragma once

#include <cstdint>

struct CAnimParamHandle;
struct AnimScriptHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x20
// Has VTable
// 
// MGetKV3ClassDefaults
class CExpressionActionUpdater : public CAnimActionUpdater
{
public:
	CAnimParamHandle m_hParam; // 0x18	
	AnimParamType_t m_eParamType; // 0x1a	
private:
	[[maybe_unused]] uint8_t __pad001b[0x1]; // 0x1b
public:
	AnimScriptHandle m_hScript; // 0x1c	
};

