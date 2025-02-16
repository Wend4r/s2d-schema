#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd10
// Has VTable
class CCitadel_Upgrade_StabilizingTripod : public CCitadel_Item
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecDeployedSentries; // 0xb20	
	Vector m_vDeployPosition; // 0xb38	
	QAngle m_vDeployAngles; // 0xb44	
};

