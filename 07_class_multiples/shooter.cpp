#include "shooter.h"

//class Shooter implementation

Roll Shoot::shoot(Die & d1, Die & d2)
{
	Roll roll(d1, d2);
	roll.roll(d1, d2);
	return roll;
}
