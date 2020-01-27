#include "color.h"



// Cr�e une couleur

Color::Color()
{
	red = 0;
	green = 0;
	blue = 0;
}



// Cr�e une couleur � partir d'une autre

Color::Color(const Color& color)
{
	red = color.red;
	green = color.green;
	blue = color.blue;
}



// Cr�e une couleur � partir de ses composantes rouges, vertes et bleues

Color::Color(int red, int green, int blue)
{
	this->red = red;
	this->green = green;
	this->blue = blue;
}



// Assignation

void Color::operator=(const Color& color)
{
	red = color.red;
	green = color.green;
	blue = color.blue;
}



// Donne une couleur � partir de la distance entre une case et la sortie

Color color(int value, const int& max_value)
{
	value = int(double((double(value) / double(max_value)) * double(255)));

	if (value <= 255)
		return Color(255, 255 - value, 0);

	if (value > 255 and value <= 255 * 2)
		return Color(2 * 255 - value, 0, value - 255);

	if (value > 255 * 2 and value <= 255 * 3)
		return Color(0, 0, 255 * 3 - value);

	return Color(0, 0, 0);
}