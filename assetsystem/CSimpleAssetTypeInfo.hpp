#pragma once

#include <cstdint>

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
class CSimpleAssetTypeInfo
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CUtlString m_FriendlyName; // 0x10	
	CUtlString m_Ext; // 0x18	
	CUtlString m_IconLg; // 0x20	
	CUtlString m_IconSm; // 0x28	
	CUtlVector< CUtlString > m_SuppressSubstrings; // 0x30	
	CUtlVector< CUtlString > m_AdditionalExtensions; // 0x48	
	CUtlVector< AssetEngineCommand_t > m_EngineCommands; // 0x60	
	CUtlVector< CUtlString > m_LimitToMods; // 0x78	
	CUtlVector< CUtlString > m_ExcludeFromMods; // 0x90	
	CUtlVector< CUtlString > m_HideForRetailMods; // 0xa8	
	bool m_bHideTypeByDefault; // 0xc0	
	bool m_bCannotBeShown; // 0xc1	
	bool m_bIsNontrivialChildAssetType; // 0xc2	
	bool m_bSuppressFullFingerprintCalculation; // 0xc3	
	bool m_bIgnoreCompiledState; // 0xc4	
	bool m_bContentFileIsText; // 0xc5	
	bool m_bPrefersLivePreview; // 0xc6	
	bool m_bPresentInGameTree; // 0xc7	
	bool m_bShouldCompileErrorFallbackToDisk; // 0xc8	
	bool m_bUnrecognizedReferencesAreErrors; // 0xc9	
};

