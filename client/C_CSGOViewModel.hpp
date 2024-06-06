#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1000
// Has VTable
// 
// MNetworkOverride "m_hWeapon"
// MNetworkVarNames "bool m_bShouldIgnoreOffsetAndAccuracy"
// MNetworkVarNames "uint32 m_nWeaponParity"
class C_CSGOViewModel : public C_PredictedViewModel
{
private:
	[[maybe_unused]] uint8_t __pad0f60[0x8]; // 0xf60
public:
	// MNetworkEnable
	bool m_bShouldIgnoreOffsetAndAccuracy; // 0xf68	
private:
	[[maybe_unused]] uint8_t __pad0f69[0x3]; // 0xf69
public:
	// MNetworkEnable
	uint32_t m_nWeaponParity; // 0xf6c	
	uint32_t m_nOldWeaponParity; // 0xf70	
	CEntityIndex m_nLastKnownAssociatedWeaponEntIndex; // 0xf74	
	bool m_bNeedToQueueHighResComposite; // 0xf78	
private:
	[[maybe_unused]] uint8_t __pad0f79[0x4f]; // 0xf79
public:
	QAngle m_vLoweredWeaponOffset; // 0xfc8	
};

