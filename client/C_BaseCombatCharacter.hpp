#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x11a8
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "CHandle<C_EconWearable > m_hMyWearables"
class C_BaseCombatCharacter : public C_BaseFlex
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWearablesChanged"
	C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // 0x1120	
	AttachmentHandle_t m_leftFootAttachment; // 0x1138	
	AttachmentHandle_t m_rightFootAttachment; // 0x1139	
private:
	[[maybe_unused]] uint8_t __pad113a[0x2]; // 0x113a
public:
	C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // 0x113c	
	float m_flWaterWorldZ; // 0x1140	
	float m_flWaterNextTraceTime; // 0x1144	
};

