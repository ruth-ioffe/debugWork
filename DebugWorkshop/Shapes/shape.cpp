#include "Shape.h"

Shape::Shape() : _area(0), _perimeter(0)
{

}

void Shape::set_area(float _area)
{
	this->_area = _area;
}

float Shape::get_area() const
{
	return _area;
}
