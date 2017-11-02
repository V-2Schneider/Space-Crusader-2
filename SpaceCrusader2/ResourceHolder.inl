#pragma once

template <typename Resource, typename Identifier>
template <typename Parameter>
void ResourceHolder<Resource, Identifier>::load(Identifier id, const std::string& filename, const Parameter& secondParam) {
	std::unique_ptr<Resource> resource(new Resource());
	if (!resource->loadFromFile(filename, secondParam))
		throw std::runtime_error("ResourceHolder::Load - Failed to load " + filename);

	auto inserted = mResourceMap.insert(std::make_pair(id, std::move(resource)));
	assert(inserted.second);
}