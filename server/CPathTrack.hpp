#pragma once

#include <cstdint>

struct CPathTrack;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CPathTrack : public CPointEntity
{
public:
	CPathTrack* m_pnext; // 0x4d8	
	CPathTrack* m_pprevious; // 0x4e0	
	CPathTrack* m_paltpath; // 0x4e8	
	float m_flRadius; // 0x4f0	
	float m_length; // 0x4f4	
	CUtlSymbolLarge m_altName; // 0x4f8	
	int32_t m_nIterVal; // 0x500	
	TrackOrientationType_t m_eOrientationType; // 0x504	
	CEntityIOOutput m_OnPass; // 0x508	
	
	// Static fields:
	static int32_t &Get_s_nCurrIterVal(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPathTrack")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bIsIterating(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPathTrack")->m_static_fields[1]->m_instance);};
	
	// Datamap fields:
	// void InputPass; // 0x0
	// void InputEnableAlternatePath; // 0x0
	// void InputDisableAlternatePath; // 0x0
	// void InputToggleAlternatePath; // 0x0
	// void InputEnablePath; // 0x0
	// void InputDisablePath; // 0x0
	// void InputTogglePath; // 0x0
};

