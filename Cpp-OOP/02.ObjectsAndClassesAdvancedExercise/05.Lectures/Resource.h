#ifndef RESOURCE_H
#define RESOURCE_H

#include <sstream>

#include "ResourceType.h"

using namespace std;

namespace SoftUni {
	class Resource {
		int id;
		ResourceType rt;
		string url;

	public:
		ResourceType  getType() const { return rt; }

		bool operator < (const Resource& other) const {
			return this->id < other.id;
		}

		friend istream& operator>>(istream& istr, Resource& r);
		friend ostream& operator<<(ostream& ostr, const Resource& r);
	};

	istream& operator>>(istream& istr, ResourceType& rt) {
		string buf;
		istr >> buf;

		if (buf == "Demo") rt = ResourceType::DEMO;
		else if (buf == "Presentation") rt = ResourceType::PRESENTATION;
		else rt = ResourceType::VIDEO;

		return istr;
	}

	istream& operator>>(istream& istr, Resource& r) {
		istr >> r.id >> r.rt >> r.url;
		return istr;
	}

	ostream& operator<<(ostream& ostr, const Resource& r) {
		ostr << r.id << ' ' << r.rt << ' ' << r.url;
		return ostr;
	}
}

#endif // !RESOURCE_H