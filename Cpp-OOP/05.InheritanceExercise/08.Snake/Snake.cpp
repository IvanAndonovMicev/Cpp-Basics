#include <vector>

#include "Snake.h"

using namespace std;

Snake::Snake(const int fieldRows, const int fieldCols, const Point& startPos)
	:_FIELD_ROWS(fieldRows),
	_FIELD_COLS(fieldCols),
	_currPos(startPos),
	_snakeNodes(1, startPos) {}

Snake::~Snake() {}

std::deque<Point>& Snake::getSnakeNodes() { return _snakeNodes; }

bool updateSnakePos(Direction dir, int ySize, int xSize, Point& point, const std::vector<Point>& obstacles) {
	switch (dir) {
	case Direction::UP:		point.row--; break;
	case Direction::DOWN:   point.row++; break;
	case Direction::LEFT:   point.col--; break;
	case Direction::RIGHT:	point.col++; break;
	}

	if (point.row >= ySize || point.col >= xSize || point.row < 0 || point.col < 0)
		return false; //dead

	for (auto a : obstacles)
		if (a == point)
			return false;

	return true;
}

bool eatenPowerUp(std::vector<Point>& powerUps, const Point& newHead) {
	for (auto p = powerUps.begin(); p != powerUps.end(); p++)
		if (*p == newHead) {
			powerUps.erase(p);
			return true;
		}

	return false;
}

StatusCode Snake::move(const Direction dir, const std::vector<Point>& obstacles, std::vector<Point>& powerUps) {
	if (!updateSnakePos(dir, _FIELD_ROWS, _FIELD_COLS, _currPos, obstacles))
		return StatusCode::SNAKE_DEAD;

	_snakeNodes.push_front(_currPos);

	for (auto a = _snakeNodes.begin() + 1; a != _snakeNodes.end(); a++)
		if (*a == _currPos)
			return StatusCode::SNAKE_DEAD;

	if (eatenPowerUp(powerUps, _currPos))
		return StatusCode::SNAKE_GROWING;
	else
		_snakeNodes.pop_back();

	return StatusCode::SNAKE_MOVING;
}