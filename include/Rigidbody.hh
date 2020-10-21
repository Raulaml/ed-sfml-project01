#include<box2d/box2d.h>

class RigidBody
{
private:
        b2BodyDef* bodyDef;
        b2Body* body;
        b2PolygonShape* polygonShape;
        b2FixtureDef* fixtureDef;
        b2Fixture* fixture;
public:
    RigidBody(b2World*&, b2BodyType, b2Vec2*, float, float, float, float, float);
    ~RigidBody();
    b2Body* GetBody() const;
};

