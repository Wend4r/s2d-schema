#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcc0
// Has VTable
class CCitadel_Upgrade_StabilizingTripod : public CCitadel_Item
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecDeployedSentries; // 0xad0	
	Vector m_vDeployPosition; // 0xae8	
	QAngle m_vDeployAngles; // 0xaf4	
};

