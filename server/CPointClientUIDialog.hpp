#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x920
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActivator"
class CPointClientUIDialog : public CBaseClientUIEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnDialogActivatorChanged"
	CHandle< CBaseEntity > m_hActivator; // 0x918	
	bool m_bStartEnabled; // 0x91c	
};

