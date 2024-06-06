#pragma once

#include <cstdint>

struct sky3dparams_t;
struct CSkyCamera;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x560
// Has VTable
// 
// MNetworkVarNames "sky3dparams_t m_skyboxData"
// MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
class CSkyCamera : public CBaseEntity
{
public:
	// MNetworkEnable
	// -> scale - 0x4c8
	// -> origin - 0x4cc
	// -> bClip3DSkyBoxNearToWorldFar - 0x4d8
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0x4dc
	// -> fog - 0x4e0
	// -> m_nWorldGroupID - 0x548
	sky3dparams_t m_skyboxData; // 0x4c0	
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x550	
	bool m_bUseAngles; // 0x554	
private:
	[[maybe_unused]] uint8_t __pad0555[0x3]; // 0x555
public:
	CSkyCamera* m_pNext; // 0x558	
	
	// Datamap fields:
	// int16_t m_skyboxData.scale; // 0x4c8
	// Vector m_skyboxData.origin; // 0x4cc
	// bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x4d8
	// float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x4dc
	// bool m_skyboxData.fog.enable; // 0x544
	// bool m_skyboxData.fog.blend; // 0x545
	// Vector m_skyboxData.fog.dirPrimary; // 0x4e8
	// Color m_skyboxData.fog.colorPrimary; // 0x4f4
	// Color m_skyboxData.fog.colorSecondary; // 0x4f8
	// float m_skyboxData.fog.start; // 0x504
	// float m_skyboxData.fog.end; // 0x508
	// float m_skyboxData.fog.maxdensity; // 0x510
	// void InputActivateSkybox; // 0x0
};

