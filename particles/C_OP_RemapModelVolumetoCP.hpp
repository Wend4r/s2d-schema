#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapModelVolumetoCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "output BBox Type"
	BBoxVolumeType_t m_nBBoxType; // 0x1c0	
	// MPropertyFriendlyName "input control point"
	int32_t m_nInControlPointNumber; // 0x1c4	
	// MPropertyFriendlyName "output control point"
	int32_t m_nOutControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "output max control point"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_MINS_MAXS"
	int32_t m_nOutControlPointMaxNumber; // 0x1cc	
	// MPropertyFriendlyName "output CP component"
	// MPropertyAttributeChoiceName "vector_component"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
	int32_t m_nField; // 0x1d0	
	// MPropertyFriendlyName "input volume minimum in cubic units"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
	float m_flInputMin; // 0x1d4	
	// MPropertyFriendlyName "input volume maximum in cubic units"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
	float m_flInputMax; // 0x1d8	
	// MPropertyFriendlyName "output minimum"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
	float m_flOutputMin; // 0x1dc	
	// MPropertyFriendlyName "output maximum"
	// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
	float m_flOutputMax; // 0x1e0	
};

