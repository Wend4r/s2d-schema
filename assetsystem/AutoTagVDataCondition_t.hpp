#pragma once

#include <cstdint>

// Registered binary: assetsystem.dll (project 'toolutils2')
// Alignment: 8
// Size: 0x158
// 
// MGetKV3ClassDefaults
struct AutoTagVDataCondition_t
{
public:
	// MPropertyDescription "The VData file to read"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCVDataResource > > m_SourceFile; // 0x0	
	// MPropertyDescription "The key whose value must match the asset name (ie. something like 'm_Model' if you want to apply this tag to .vmdl assets that are referenced by the vdata file)"
	CKV3MemberNameWithStorage m_AssetKey; // 0xe0	
	// MPropertyDescription "Optional second key to check"
	CKV3MemberNameWithStorage m_AlternateAssetKey; // 0x118	
	// MPropertyDescription "This expression determines whether the tag should actually be applied to an asset
It will be evaluated against vdata entries where the key matches the asset - if any of them evaluate to true the tag will be applied.
Most simple expressions involving the VData keys are supported. Use 'true' to tag unconditionally."
	CUtlString m_Expression; // 0x150	
};

