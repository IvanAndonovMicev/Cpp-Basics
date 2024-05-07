#include "DeathKnight.h"

#include <iostream>

using namespace std;

DeathKnight::DeathKnight(const std::string& name,
	const int           maxMana,
	const int           baseManaRegenRate) : Hero(name, maxMana, baseManaRegenRate) {}

void DeathKnight::castSpell(const SpellType spell) {
	Spell& sp = _spells[spell];

	if (_currMana >= sp.manaCost) {
		cout << _name << " casted " << sp.name << " for " << sp.manaCost << " mana" << endl;
		_currMana -= sp.manaCost;

		if (spell == SpellType::ULTIMATE)
			cout << _name << " casted " << _spells[SpellType::BASIC].name << " for 0 mana" << endl;
	}
	else
		cout << _name << " - not enough mana to cast " << sp.name << endl;
}

void DeathKnight::regenerateMana() {
	_currMana += _manaRegenRate;
	if (_currMana >= _maxMana)
		_currMana = _maxMana;
}