#pragma once

class Actor {
public:
	int x, y; //Position on Map
	int ch; //ASCII code
	TCODColor col; //Color of Actor

	Actor(int x, int y, int ch, const TCODColor &col);
	void render() const;
};