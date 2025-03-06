#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "CHandle<C_EconWearable > m_hMyWearables"
class C_BaseCombatCharacter : public C_BaseFlex
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWearablesChanged"
	C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // 0xc98	
	AttachmentHandle_t m_leftFootAttachment; // 0xcb0	
	AttachmentHandle_t m_rightFootAttachment; // 0xcb1	
private:
	[[maybe_unused]] uint8_t __pad0cb2[0x2]; // 0xcb2
public:
	C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // 0xcb4	
	float m_flWaterWorldZ; // 0xcb8	
	float m_flWaterNextTraceTime; // 0xcbc	
};

