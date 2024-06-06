#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x550
// Has VTable
class CPhysFixed : public CPhysConstraint
{
public:
	float m_flLinearFrequency; // 0x538	
	float m_flLinearDampingRatio; // 0x53c	
	float m_flAngularFrequency; // 0x540	
	float m_flAngularDampingRatio; // 0x544	
	bool m_bEnableLinearConstraint; // 0x548	
	bool m_bEnableAngularConstraint; // 0x549	
	
	// Datamap fields:
	// float InputSetLinearFrequency; // 0x0
	// float InputSetLinearDampingRatio; // 0x0
	// float InputSetAngularFrequency; // 0x0
	// float InputSetAngularDampingRatio; // 0x0
};

