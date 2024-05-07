#include "DrawRanger.h"

#include <iostream>

using namespace std;

DrawRanger::DrawRanger(const std::string& name,
	const int           maxMana,
	const int           baseManaRegenRate) : Hero(name, maxMana, baseManaRegenRate) { }

void DrawRanger::castSpell(const SpellType spell) {
	Spell& sp = _spells[spell];

	if (_currMana >= sp.manaCost) {
		cout << _name << " casted " << sp.name << " for " << sp.manaCost << " mana" << endl;
		_currMana -= sp.manaCost;

		if (spell == SpellType::BASIC)
			cout << _name << " casted " << _spells[SpellType::BASIC].name << " for 0 mana" << endl;
	}
	else
		cout << _name << " - not enough mana to cast " << sp.name << endl;
}

void  DrawRanger::regenerateMana() {
	_currMana += _manaRegenRate;
	if (_currMana >= _maxMana)
		_currMana = _maxMana;
}