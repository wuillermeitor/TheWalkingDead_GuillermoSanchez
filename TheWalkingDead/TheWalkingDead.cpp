#include <iostream>
#include <string>
#include <ctime>

const int ZombieN{ 10 };

float random(float max, float min) {
	int limit = max - min;
	float randomnum = rand() % (limit + 1) + min;

	return randomnum;
}

enum class Weapon {
	FISTS,
	GUN,
	SHOTGUN,
	REVOLVER,
	SNIPER,
	MACHINE_GUN,
	MAX
};

std::ostream& operator<< (std::ostream &os, const Weapon &weapon) {
	switch (weapon) {
	case Weapon::GUN:				return os << "gun";
	case Weapon::SHOTGUN:			return os << "shotgun";
	case Weapon::REVOLVER:			return os << "revolver";
	case Weapon::SNIPER:			return os << "sniper";
	case Weapon::MACHINE_GUN:		return os << "machine gun";
	default:						return os << "fists";
	}
}

class Zombie;

class Player {
public:
	Weapon weapon;
	float precision;
	int life;

	Player():
		weapon(static_cast<Weapon>(rand()))
	void attack(Zombie &) const;
	bool isAlive() const;
};

class Zombie {
public:
	int distanceToPlayer;
	float speed;
	float damage;
	int life;
	void attack(Player &);
	bool isAlive();
};

void Player::attack(Zombie &Z) {
	Z.life;
}

bool Player::isAlive() {
	return life > 0;
}

void Zombie::attack(Player &P) {
	if (distanceToPlayer <= 0) {
		P.life -= damage;
	}
	else {
		distanceToPlayer -= 20;
	}
}

bool Zombie::isAlive() {
	return life > 0;
}

int main() {
	srand(time(nullptr));
	int NzombiesAlive = ZombieN;
	Player player;
	Zombie zombies[ZombieN];

	bool zombiesAreAlive;

	do {
		zombiesAreAlive = false;
		for (int i = 0; i < ZombieN; i++) {

		}
	} while (player.isAlive == true);
}