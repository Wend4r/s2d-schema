#pragma once

#include <cstdint>

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x48
// 
// MGetKV3ClassDefaults
class CToolsConfig
{
public:
	CUtlVector< CEngineToolInfo > m_EngineTools; // 0x0	
	CUtlVector< CExternalToolInfo > m_ExternalTools; // 0x18	
	CUtlVector< CUtlString > m_EngineModulesThatReferenceAssets; // 0x30	
};

