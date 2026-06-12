#pragma once

struct Vector2D
{
	int X = 0;
	int Y = 0;

	Vector2D(int InX = 0, int InY = 0) : X(InX), Y(InY)
	{

	}

	inline bool operator==(const Vector2D& InOther) const { return InOther.X == X && InOther.Y == Y; }
	inline bool operator!=(const Vector2D& InOther) const { return !(*this == InOther); }
	
	inline Vector2D operator+(const Vector2D& InOther) const { return Vector2D(this->X + InOther.X, this->Y + InOther.Y); }
	inline Vector2D& operator +=(const Vector2D& InOther) { X += InOther.X; Y += InOther.Y; return *this; }
};

enum class DirectionType
{
	Up,
	Down,
	Left,
	Right
};
Vector2D DefaultDirections[4] = {
	Vector2D(0, -1),	// Up
	Vector2D(0, 1),		// Down
	Vector2D(-1, 0),	// Left
	Vector2D(1, 0)		// Right
};
