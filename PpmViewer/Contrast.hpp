#pragma once
#include "PpmDocument.hpp"
#include "ImageEffect.hpp"
class ContrastEffect : public ImageEffect
{
public:

	virtual void applyEffect(PpmDocument& doc)
	{
		for (int i = 0; i < doc.getHeight(); i++)
		{
			for (int j = 0; j < doc.getWidth(); j++)
			{
				Pixel& p = doc[i][j];


				//Setting red pixel values
				if (p.red > 127)
				{
					p.red = 255;
				}
				else if (p.red < 127)
				{
					p.red = 0;
				}


				//Setting green values
				else if (p.green > 127)
				{
					p.green = 255;
				}
				else if (p.green < 127)
				{
					p.green = 0;
				}

				// Setting blue pixel values
				else if (p.blue > 127)
				{
					p.blue = 255;
				}
				else if (p.blue < 127)
				{
					p.blue = 0;
				}

				doc[i][j] = p;
			}
		}
	}
};

