#pragma once
// NOTE: This file contains both ComponentContainer and Registry classes within a single file

#include <assert.h>
#include "components.hpp"
#include "entity.hpp"

// A container that stores components of type 'Component'
// TODO: You will have to change this class to be applicable to different component types
class ComponentContainer
{
private:
    // TODO: add variables to store components and to associate components to entities
	
public:
    ComponentContainer() {};
	
	// Return a list of entity IDs for iterating over the entity's in this container
	/* TODO entity_id_list()
	{
	};
	*/

    // Inserts a component c associated to entity e
	// TODO: add insert functionality and define the right return type
	/*
    TODO insert(Entity e, Component c)
    {
        assert(!has(e) && "Entity already contained in registry");
    }; */

    // Checks if entity e has a component of type 'Component'
	// TODO: add has functionality
    bool has(const Entity& e)
    {
 		
    };

    // Removes the component of type 'Component' from entity e
    // TODO: add remove functionality
    void remove(const Entity& e)
    {

    };

    // Returns the component of type 'Component' associated with entity e
	// TODO: add get functionality, including the right return type
	/*
    TODO get(const Entity& e) {
        
    };
	*/
};

// Component registry
class Registry
{
public:
	// TODO: add your components here, e.g.:
    // 			ComponentContainer<Swims> swims;
	// 			SwimsContainer swims;

    Registry() {}

	// TODO: implement create_entity
	/*
    Entity create_entity() {
        
    }
	*/
};