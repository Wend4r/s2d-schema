#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10b0
// Has VTable
// 
// MNetworkVarNames "bool m_bShouldIgnoreOffsetAndAccuracy"
class C_CSGOViewModel : public C_PredictedViewModel
{
private:
	[[maybe_unused]] uint8_t __pad1018[0x9]; // 0x1018
public:
	// MNetworkEnable
	bool m_bShouldIgnoreOffsetAndAccuracy; // 0x1021	
private:
	[[maybe_unused]] uint8_t __pad1022[0x2]; // 0x1022
public:
	CEntityIndex m_nLastKnownAssociatedWeaponEntIndex; // 0x1024	
	bool m_bNeedToQueueHighResComposite; // 0x1028	
private:
	[[maybe_unused]] uint8_t __pad1029[0x4f]; // 0x1029
public:
	QAngle m_vLoweredWeaponOffset; // 0x1078	
};

