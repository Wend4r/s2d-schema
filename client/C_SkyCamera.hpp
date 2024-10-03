#pragma once

#include <cstdint>

struct sky3dparams_t;
struct C_SkyCamera;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x608
// Has VTable
// 
// MNetworkVarNames "sky3dparams_t m_skyboxData"
// MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
class C_SkyCamera : public C_BaseEntity
{
public:
	// MNetworkEnable
	// -> scale - 0x570
	// -> origin - 0x574
	// -> bClip3DSkyBoxNearToWorldFar - 0x580
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0x584
	// -> fog - 0x588
	// -> m_nWorldGroupID - 0x5f0
	sky3dparams_t m_skyboxData; // 0x568	
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x5f8	
	bool m_bUseAngles; // 0x5fc	
private:
	[[maybe_unused]] uint8_t __pad05fd[0x3]; // 0x5fd
public:
	C_SkyCamera* m_pNext; // 0x600	
	
	// Datamap fields:
	// int16_t m_skyboxData.scale; // 0x570
	// Vector m_skyboxData.origin; // 0x574
	// bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x580
	// float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x584
	// bool m_skyboxData.fog.enable; // 0x5ec
	// bool m_skyboxData.fog.blend; // 0x5ed
	// Vector m_skyboxData.fog.dirPrimary; // 0x590
	// Color m_skyboxData.fog.colorPrimary; // 0x59c
	// Color m_skyboxData.fog.colorSecondary; // 0x5a0
	// float m_skyboxData.fog.start; // 0x5ac
	// float m_skyboxData.fog.end; // 0x5b0
	// float m_skyboxData.fog.maxdensity; // 0x5b8
};

