#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x840
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActivator"
class C_PointClientUIDialog : public C_BaseClientUIEntity
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnDialogActivatorChanged"
	CHandle< C_BaseEntity > m_hActivator; // 0x838	
	bool m_bStartEnabled; // 0x83c	
};

