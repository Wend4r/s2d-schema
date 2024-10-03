#pragma once

#include <cstdint>

struct sky3dparams_t;
struct CSkyCamera;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x580
// Has VTable
// 
// MNetworkVarNames "sky3dparams_t m_skyboxData"
// MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
class CSkyCamera : public CBaseEntity
{
public:
	// MNetworkEnable
	// -> scale - 0x4e8
	// -> origin - 0x4ec
	// -> bClip3DSkyBoxNearToWorldFar - 0x4f8
	// -> flClip3DSkyBoxNearToWorldFarOffset - 0x4fc
	// -> fog - 0x500
	// -> m_nWorldGroupID - 0x568
	sky3dparams_t m_skyboxData; // 0x4e0	
	// MNetworkEnable
	CUtlStringToken m_skyboxSlotToken; // 0x570	
	bool m_bUseAngles; // 0x574	
private:
	[[maybe_unused]] uint8_t __pad0575[0x3]; // 0x575
public:
	CSkyCamera* m_pNext; // 0x578	
	
	// Datamap fields:
	// int16_t m_skyboxData.scale; // 0x4e8
	// Vector m_skyboxData.origin; // 0x4ec
	// bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x4f8
	// float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x4fc
	// bool m_skyboxData.fog.enable; // 0x564
	// bool m_skyboxData.fog.blend; // 0x565
	// Vector m_skyboxData.fog.dirPrimary; // 0x508
	// Color m_skyboxData.fog.colorPrimary; // 0x514
	// Color m_skyboxData.fog.colorSecondary; // 0x518
	// float m_skyboxData.fog.start; // 0x524
	// float m_skyboxData.fog.end; // 0x528
	// float m_skyboxData.fog.maxdensity; // 0x530
	// void InputActivateSkybox; // 0x0
};

