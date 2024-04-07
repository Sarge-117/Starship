#pragma once

#include "Resource.h"
#include "ResourceFactoryBinary.h"

namespace SF64 {
class ResourceFactoryBinaryVec3fV0 : public LUS::ResourceFactoryBinary {
  public:
    std::shared_ptr<LUS::IResource> ReadResource(std::shared_ptr<LUS::File> file) override;
};
}; // namespace LUS
