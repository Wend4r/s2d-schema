#pragma once

#include <cstdint>

struct ice_path_shard_model_desc_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c0
// Has VTable
// 
// MNetworkExcludeByName "m_hModel"
// MNetworkVarNames "ice_path_shard_model_desc_t m_ShardDesc"
// MNetworkVarNames "QAngle m_qForward"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "GameTime_t m_flEndTime"
class CCitadel_Ice_Path_Shard_Physics : public CBaseModelEntity
{
public:
	// MNetworkEnable
	ice_path_shard_model_desc_t m_ShardDesc; // 0x768	
	// MNetworkEnable
	QAngle m_qForward; // 0x7a0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnStartTimeChanged"
	GameTime_t m_flStartTime; // 0x7ac	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEndTimeChanged"
	GameTime_t m_flEndTime; // 0x7b0	
	bool m_bIsBase; // 0x7b4	
private:
	[[maybe_unused]] uint8_t __pad07b5[0x3]; // 0x7b5
public:
	CHandle< CTriggerIcePathVolume > m_hTrooperTrigger; // 0x7b8	
};

