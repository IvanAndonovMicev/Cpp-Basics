#ifndef  TreeView_h
#define TreeView_h

#include <string>
#include <vector>
#include <memory>
#include <sstream>
#include <algorithm>

std::string  getTreeView(
	std::vector<std::shared_ptr<FileSystemObject>>::const_iterator begin,
	std::vector<std::shared_ptr<FileSystemObject>>::const_iterator end,
	const std::string& indentation)
{
	std::ostringstream ostr;
	std::vector<std::shared_ptr<FileSystemObject>>contents(begin, end);

	std::sort(contents.begin(), contents.end(),
		[](const std::shared_ptr<FileSystemObject> a,
			const std::shared_ptr<FileSystemObject> b) {
				return a->getName() < b->getName();
		});

	for (std::shared_ptr < FileSystemObject> o : contents) {
		ostr << indentation << o->getName() << std::endl;

		FileSystemObjectsContainer* d = dynamic_cast<FileSystemObjectsContainer*>(o.get());

		if (d != nullptr) {
			ostr << getTreeView(d->begin(), d->end(), "--->" + indentation);
		}
	}

	return  ostr.str();
}

std::string  getTreeView(std::vector<std::shared_ptr<FileSystemObject>>& root) {
	return getTreeView(root.begin(), root.end(), "");;
}

#endif // ! TreeView_h
