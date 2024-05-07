#ifndef LECTURE_H
#define LECTURE_H

#include <set>
#include <vector>
#include <map>
#include "Resource.h"

using namespace std;

namespace SoftUni {
	class Lecture
	{
		typedef set<Resource> ResourceSet;
		ResourceSet resources;

		map<ResourceType, int> resourceTypes;

	public:

		Lecture& operator << (const Resource& r) {
			ResourceSet::iterator itFound = resources.find(r);
			if (itFound != resources.end()) {
				resourceTypes[r.getType()]--;
				resources.erase(itFound);
			}

			resources.insert(r);
			resourceTypes[r.getType()]++;
			return *this;
		}

		ResourceSet::iterator  begin() { return resources.begin(); }
		ResourceSet::iterator end() { return resources.end(); }

		int operator [] (ResourceType rt) {
			if (resourceTypes.find(rt) != resourceTypes.end())
				return resourceTypes[rt];
			else
				return 0;
		}

		friend vector<ResourceType> operator << (vector<ResourceType>& first, Lecture& lecture);
	};

	vector<ResourceType> operator << (vector<ResourceType>& first, Lecture& lecture) {
		for (auto rType : lecture.resourceTypes)
			first.push_back(rType.first);

		return first;
	}
}

#endif // !LECTURE_H
