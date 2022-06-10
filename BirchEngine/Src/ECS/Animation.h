#pragma once
//création de la structure animation
struct Animation
{
	//declaration des variables pour les animations du personnage
	int index;
	int frames;
	int speed;

	Animation() {}
	//affectation des variables pour les animations
	Animation(int i, int f, int s)
	{
		index = i;
		frames = f;
		speed = s;
	}

};