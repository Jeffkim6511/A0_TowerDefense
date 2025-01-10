#pragma once

// Unique identifier for all entities
class Entity
{
    unsigned int id;
public:
    Entity()
    {
        // TODO: somehow ensure that each entity gets a unique ID
    }
    operator unsigned int() { return id; } // this enables automatic casting to int
};