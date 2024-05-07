#ifndef Directory_h
#define Directory_h

#include "FileSystemObjectsContainer.h"
#include <vector>
#include <algorithm>

class Directory : public FileSystemObjectsContainer, public FileSystemObject {
public:

	std::vector < std::shared_ptr<FileSystemObject>> contents;

	Directory(std::string name) : FileSystemObject(name) {}

	virtual size_t getSize() const {
		size_t size = 0;

		for (std::shared_ptr<FileSystemObject> o : contents)
			size += o->getSize();
		return size;
	}

	virtual void add(const std::shared_ptr<FileSystemObject>& obj) {
		contents.push_back(obj);
	}

	virtual std::vector<std::shared_ptr<FileSystemObject> >::const_iterator begin() const {
		return contents.begin();
	}
	virtual std::vector<std::shared_ptr<FileSystemObject> >::const_iterator end() const {
		return contents.end();
	}

	void remove(std::shared_ptr<FileSystemObject> obj) {
		auto i = std::find(this->contents.begin(), this->contents.end(), obj);
		this->contents.erase(i);
	}
};

#endif // !Directory_h
