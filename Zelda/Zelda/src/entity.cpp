#include "../headers/entity.hpp"

Entity::Entity(string _name)
{
	name = _name;
}

Entity::~Entity()
{

}

Sprite Entity::getSprite() const
{
	return entityDrawable;
}

void Entity::draw(RenderWindow *window) const
{
	window->draw(entityDrawable);
}

void Entity::move(Vector2f distance)
{
	entityDrawable.move(distance);
}

void Entity::setPosition(Vector2f pos)
{
	entityDrawable.setPosition(pos);
}

void Entity::setSize(Vector2f scale)
{
	entityDrawable.setScale(scale);
}

void Entity::setVelocity(Vector2f newVelocity)
{
	velocity = newVelocity;
}

float Entity::getY()
{
	return entityDrawable.getPosition().y;
}

float Entity::getX()
{
	return entityDrawable.getPosition().x;
}