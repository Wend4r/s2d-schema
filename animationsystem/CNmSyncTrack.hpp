#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 8
// Size: 0xb0
// 
// MGetKV3ClassDefaults
class CNmSyncTrack
{
public:
	CUtlLeanVectorFixedGrowable< CNmSyncTrack::Event_t, 10 > m_syncEvents; // 0x0	
	int32_t m_nStartEventOffset; // 0xa8	
	
	// Static fields:
	static CNmSyncTrack &Get_s_defaultTrack(){return *reinterpret_cast<CNmSyncTrack*>(interfaces::g_schema->FindTypeScopeForModule("animationsystem.dll")->FindDeclaredClass("CNmSyncTrack")->m_static_fields[0]->m_instance);};
};

