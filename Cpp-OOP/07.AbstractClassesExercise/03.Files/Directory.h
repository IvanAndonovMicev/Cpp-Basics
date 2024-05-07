#ifndef Directory_h
#define Directory_h

#include "FileSystemObjectsContainer.h"
#include <list>

class Directory : public FileSystemObjectsContainer, public FileSystemObject {
public:

	std::list < std::shared_ptr<FileSystemObject>> contents;

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
};

#endif // !Directory_h
