#pragma once
#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class GrayscaleEffect : public ImageEffect
{
public:
	virtual void applyEffect(PpmDocument& doc)
	{
		for (int i = 0; i < doc.getHeight(); i++)
		{
			for (int j = 0; j < doc.getWidth(); j++)
			{
				Pixel& p = doc[i][j];

				int average = (p.red + p.green + p.blue) / 3;

				p.red = average;
				p.green = average;
				p.blue = average;

				//not necessary as we're using references but it makes our intent more clear
				doc[i][j] = p;
			}
		}
	}
};

