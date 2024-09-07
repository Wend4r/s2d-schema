#pragma once

#include <cstdint>

struct sky3dparams_t;
struct C_SkyCamera;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MNetworkVarNames "sky3dparams_t m_skyboxData"
// MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
class C_SkyCamera : public C_BaseEntity
{
public:
	// MNetworkEnable
	// -> scale - 0x560
	// -> origin - 0x564
	// -> bClip3DSkyBoxNearToWorldFar - 0x570
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0x574
	// -> fog - 0x578
	// -> m_nWorldGroupID - 0x5e0
	sky3dparams_t m_skyboxData; // 0x558	
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x5e8	
	bool m_bUseAngles; // 0x5ec	
private:
	[[maybe_unused]] uint8_t __pad05ed[0x3]; // 0x5ed
public:
	C_SkyCamera* m_pNext; // 0x5f0	
	
	// Datamap fields:
	// int16_t m_skyboxData.scale; // 0x560
	// Vector m_skyboxData.origin; // 0x564
	// bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x570
	// float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x574
	// bool m_skyboxData.fog.enable; // 0x5dc
	// bool m_skyboxData.fog.blend; // 0x5dd
	// Vector m_skyboxData.fog.dirPrimary; // 0x580
	// Color m_skyboxData.fog.colorPrimary; // 0x58c
	// Color m_skyboxData.fog.colorSecondary; // 0x590
	// float m_skyboxData.fog.start; // 0x59c
	// float m_skyboxData.fog.end; // 0x5a0
	// float m_skyboxData.fog.maxdensity; // 0x5a8
};

