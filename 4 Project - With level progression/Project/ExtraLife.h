#pragma once
#include "PlacableActor.h"

class ExtraLife : public PlacableActor {

public:
	ExtraLife(int x, int y, ActorColor color)
		: PlacableActor(x, y, color) {

	}

	virtual ActorType GetType() override { return ActorType::ExtraLife; }
	virtual void Draw() override;

};