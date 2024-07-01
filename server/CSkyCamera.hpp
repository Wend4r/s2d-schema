#pragma once

#include <cstdint>

struct sky3dparams_t;
struct CSkyCamera;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
// Has VTable
// 
// MNetworkVarNames "sky3dparams_t m_skyboxData"
// MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
class CSkyCamera : public CBaseEntity
{
public:
	// MNetworkEnable
	// -> scale - 0x4c0
	// -> origin - 0x4c4
	// -> bClip3DSkyBoxNearToWorldFar - 0x4d0
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0x4d4
	// -> fog - 0x4d8
	// -> m_nWorldGroupID - 0x540
	sky3dparams_t m_skyboxData; // 0x4b8	
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x548	
	bool m_bUseAngles; // 0x54c	
private:
	[[maybe_unused]] uint8_t __pad054d[0x3]; // 0x54d
public:
	CSkyCamera* m_pNext; // 0x550	
	
	// Datamap fields:
	// int16_t m_skyboxData.scale; // 0x4c0
	// Vector m_skyboxData.origin; // 0x4c4
	// bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x4d0
	// float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x4d4
	// bool m_skyboxData.fog.enable; // 0x53c
	// bool m_skyboxData.fog.blend; // 0x53d
	// Vector m_skyboxData.fog.dirPrimary; // 0x4e0
	// Color m_skyboxData.fog.colorPrimary; // 0x4ec
	// Color m_skyboxData.fog.colorSecondary; // 0x4f0
	// float m_skyboxData.fog.start; // 0x4fc
	// float m_skyboxData.fog.end; // 0x500
	// float m_skyboxData.fog.maxdensity; // 0x508
	// void InputActivateSkybox; // 0x0
};

