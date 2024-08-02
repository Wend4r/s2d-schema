#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Alignment: 8
// Size: 0x190
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Wind Generator Container"
// MPropertyDescription "This is a synth meant to generate whoosh noises."
class CVoiceContainerShapedNoise : public CVoiceContainerBase
{
public:
	bool m_bUseCurveForFrequency; // 0xb8	
private:
	[[maybe_unused]] uint8_t __pad00b9[0x3]; // 0xb9
public:
	// MPropertySuppressExpr "m_bUseCurveForFrequency == 1"
	float m_flFrequency; // 0xbc	
	// MPropertySuppressExpr "m_bUseCurveForFrequency == 0"
	// MPropertyFriendlyName "Frequency Sweep"
	CPiecewiseCurve m_frequencySweep; // 0xc0	
	bool m_bUseCurveForResonance; // 0x100	
private:
	[[maybe_unused]] uint8_t __pad0101[0x3]; // 0x101
public:
	// MPropertySuppressExpr "m_bUseCurveForResonance == 1"
	float m_flResonance; // 0x104	
	// MPropertySuppressExpr "m_bUseCurveForResonance == 0"
	// MPropertyFriendlyName "Resonance Sweep"
	CPiecewiseCurve m_resonanceSweep; // 0x108	
	bool m_bUseCurveForAmplitude; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad0149[0x3]; // 0x149
public:
	// MPropertySuppressExpr "m_bUseCurveForAmplitude == 1"
	float m_flGainInDecibels; // 0x14c	
	// MPropertySuppressExpr "m_bUseCurveForAmplitude == 0"
	// MPropertyFriendlyName "Gain Sweep (in Decibels)"
	CPiecewiseCurve m_gainSweep; // 0x150	
};

