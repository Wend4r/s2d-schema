#pragma once

#include <cstdint>

struct sky3dparams_t;
struct C_SkyCamera;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5e8
// Has VTable
// 
// MNetworkVarNames "sky3dparams_t m_skyboxData"
// MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
class C_SkyCamera : public C_BaseEntity
{
public:
	// MNetworkEnable
	// -> scale - 0x550
	// -> origin - 0x554
	// -> bClip3DSkyBoxNearToWorldFar - 0x560
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0x564
	// -> fog - 0x568
	// -> m_nWorldGroupID - 0x5d0
	sky3dparams_t m_skyboxData; // 0x548	
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x5d8	
	bool m_bUseAngles; // 0x5dc	
private:
	[[maybe_unused]] uint8_t __pad05dd[0x3]; // 0x5dd
public:
	C_SkyCamera* m_pNext; // 0x5e0	
	
	// Datamap fields:
	// int16_t m_skyboxData.scale; // 0x550
	// Vector m_skyboxData.origin; // 0x554
	// bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x560
	// float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x564
	// bool m_skyboxData.fog.enable; // 0x5cc
	// bool m_skyboxData.fog.blend; // 0x5cd
	// Vector m_skyboxData.fog.dirPrimary; // 0x570
	// Color m_skyboxData.fog.colorPrimary; // 0x57c
	// Color m_skyboxData.fog.colorSecondary; // 0x580
	// float m_skyboxData.fog.start; // 0x58c
	// float m_skyboxData.fog.end; // 0x590
	// float m_skyboxData.fog.maxdensity; // 0x598
};

