#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10a8
// Has VTable
// 
// MNetworkVarNames "bool m_bShouldIgnoreOffsetAndAccuracy"
class C_CSGOViewModel : public C_PredictedViewModel
{
private:
	[[maybe_unused]] uint8_t __pad1010[0x9]; // 0x1010
public:
	// MNetworkEnable
	bool m_bShouldIgnoreOffsetAndAccuracy; // 0x1019	
private:
	[[maybe_unused]] uint8_t __pad101a[0x2]; // 0x101a
public:
	CEntityIndex m_nLastKnownAssociatedWeaponEntIndex; // 0x101c	
	bool m_bNeedToQueueHighResComposite; // 0x1020	
private:
	[[maybe_unused]] uint8_t __pad1021[0x4f]; // 0x1021
public:
	QAngle m_vLoweredWeaponOffset; // 0x1070	
};

