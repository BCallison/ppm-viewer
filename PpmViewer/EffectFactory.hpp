#pragma once
#include "RemoveRedEffect.hpp"
#include "RemoveGreenEffect.h"
#include "RemoveBlueEffect.h"
#include "NegateRedEffect.h"
#include "NegateGreenEffect.h"
#include "NegateBlueEffect.h"
#include
#include

enum class ImageEffectType
{
	RemoveRed = 1,
	RemoveGreen,
	RemoveBlue,
	NegateRed,
	NegateGreen,
	NegateBlue,
	Grayscale,
	Contrast,
	Noise,
	Blur,
	Pixelate,


	//TODO: add rest below
};

class EffectFactory
{
public:
	static ImageEffect* createEffect(ImageEffectType effect_type)
	{
		switch (effect_type)
		{
		case ImageEffectType::RemoveRed:
			return new RemoveRedEffect{};
			break;

		case ImageEffectType::RemoveGreen:
			return new RemoveGreenEffect{};
			break;

		case ImageEffectType::RemoveBlue:
			return new RemoveBlueEffect{};
			break;

		case ImageEffectType::NegateRed:
			return new NegateRedEffect{};
			break;

		case ImageEffectType::NegateGreen:
			return new NegateGreenEffect{};
			break;

		case ImageEffectType::NegateBlue:
			return new NegateBlueEffect{};
			break;

		case ImageEffectType::Grayscale:
			return new GrayscaleEffect{};
			break;

		case ImageEffectType::Contrast:
			return new ContrastEffect{};
			break;

		case ImageEffectType::Noise:
			return new NoiseEffect{};
			break;

		case ImageEffectType::Blur:
			return new BlurEffect{};
			break;

		case ImageEffectType::Pixelate:
			return new PixelateEffect{};
			break;

		default: 
			break;
		}
	}
};