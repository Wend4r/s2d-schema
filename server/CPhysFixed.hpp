#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x548
// Has VTable
class CPhysFixed : public CPhysConstraint
{
public:
	float m_flLinearFrequency; // 0x530	
	float m_flLinearDampingRatio; // 0x534	
	float m_flAngularFrequency; // 0x538	
	float m_flAngularDampingRatio; // 0x53c	
	bool m_bEnableLinearConstraint; // 0x540	
	bool m_bEnableAngularConstraint; // 0x541	
	
	// Datamap fields:
	// float InputSetLinearFrequency; // 0x0
	// float InputSetLinearDampingRatio; // 0x0
	// float InputSetAngularFrequency; // 0x0
	// float InputSetAngularDampingRatio; // 0x0
};

