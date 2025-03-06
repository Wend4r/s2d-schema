#pragma once

#include <cstdint>

struct sky3dparams_t;
struct C_SkyCamera;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b0
// Has VTable
// 
// MNetworkVarNames "sky3dparams_t m_skyboxData"
// MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
class C_SkyCamera : public C_BaseEntity
{
public:
	// MNetworkEnable
	// -> scale - 0x518
	// -> origin - 0x51c
	// -> bClip3DSkyBoxNearToWorldFar - 0x528
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0x52c
	// -> fog - 0x530
	// -> m_nWorldGroupID - 0x598
	sky3dparams_t m_skyboxData; // 0x510	
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x5a0	
	bool m_bUseAngles; // 0x5a4	
private:
	[[maybe_unused]] uint8_t __pad05a5[0x3]; // 0x5a5
public:
	C_SkyCamera* m_pNext; // 0x5a8	
	
	// Datamap fields:
	// int16_t m_skyboxData.scale; // 0x518
	// Vector m_skyboxData.origin; // 0x51c
	// bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x528
	// float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x52c
	// bool m_skyboxData.fog.enable; // 0x594
	// bool m_skyboxData.fog.blend; // 0x595
	// Vector m_skyboxData.fog.dirPrimary; // 0x538
	// Color m_skyboxData.fog.colorPrimary; // 0x544
	// Color m_skyboxData.fog.colorSecondary; // 0x548
	// float m_skyboxData.fog.start; // 0x554
	// float m_skyboxData.fog.end; // 0x558
	// float m_skyboxData.fog.maxdensity; // 0x560
};

