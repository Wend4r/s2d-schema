#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CRandomNumberGeneratorParameters
{
public:
	// MPropertyFriendlyName "Distribute evenly"
	bool m_bDistributeEvenly; // 0x0	
	// MPropertyFriendlyName "Seed (negative values=randomize)"
	// MPropertySuppressExpr "!m_bDistributeEvenly"
	int32_t m_nSeed; // 0x4	
};

