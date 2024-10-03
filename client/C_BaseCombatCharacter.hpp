#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x11a0
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "CHandle<C_EconWearable > m_hMyWearables"
class C_BaseCombatCharacter : public C_BaseFlex
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWearablesChanged"
	C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // 0x1118	
	AttachmentHandle_t m_leftFootAttachment; // 0x1130	
	AttachmentHandle_t m_rightFootAttachment; // 0x1131	
private:
	[[maybe_unused]] uint8_t __pad1132[0x2]; // 0x1132
public:
	C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // 0x1134	
	float m_flWaterWorldZ; // 0x1138	
	float m_flWaterNextTraceTime; // 0x113c	
};

