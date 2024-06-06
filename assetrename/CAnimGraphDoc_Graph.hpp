#pragma once

#include <cstdint>

struct CAnimGraphDoc_ClipDataManager;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x148
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_Graph : public CAnimGraphDoc_SubGraph
{
public:
	CSmartPtr< CAnimGraphSettingsManager > m_pSettingsManager; // 0xe0	
private:
	[[maybe_unused]] uint8_t __pad00e8[0x8]; // 0xe8
public:
	CAnimGraphDoc_ClipDataManager m_clipDataManager; // 0xf0	
private:
	[[maybe_unused]] uint8_t __pad0120[0x18]; // 0x120
public:
	CUtlString m_modelName; // 0x138	
	CUtlString m_previewModelName; // 0x140	
};

