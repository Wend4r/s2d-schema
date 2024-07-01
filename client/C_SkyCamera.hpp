#pragma once

#include <cstdint>

struct sky3dparams_t;
struct C_SkyCamera;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d8
// Has VTable
// 
// MNetworkVarNames "sky3dparams_t m_skyboxData"
// MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
class C_SkyCamera : public C_BaseEntity
{
public:
	// MNetworkEnable
	// -> scale - 0x540
	// -> origin - 0x544
	// -> bClip3DSkyBoxNearToWorldFar - 0x550
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0x554
	// -> fog - 0x558
	// -> m_nWorldGroupID - 0x5c0
	sky3dparams_t m_skyboxData; // 0x538	
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x5c8	
	bool m_bUseAngles; // 0x5cc	
private:
	[[maybe_unused]] uint8_t __pad05cd[0x3]; // 0x5cd
public:
	C_SkyCamera* m_pNext; // 0x5d0	
	
	// Datamap fields:
	// int16_t m_skyboxData.scale; // 0x540
	// Vector m_skyboxData.origin; // 0x544
	// bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x550
	// float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x554
	// bool m_skyboxData.fog.enable; // 0x5bc
	// bool m_skyboxData.fog.blend; // 0x5bd
	// Vector m_skyboxData.fog.dirPrimary; // 0x560
	// Color m_skyboxData.fog.colorPrimary; // 0x56c
	// Color m_skyboxData.fog.colorSecondary; // 0x570
	// float m_skyboxData.fog.start; // 0x57c
	// float m_skyboxData.fog.end; // 0x580
	// float m_skyboxData.fog.maxdensity; // 0x588
};

