#pragma once

#include "TransformableObject.hpp"
#include <vector>

class Shape3D : public TransformableObject {
protected:
  std::vector<float> verts;
  std::vector<float> colors;
  std::vector<float> normals;
  std::vector<unsigned int> indices;
public:
  Shape3D(
    const std::vector<float> &verts,
    const std::vector<float> &colors,
    const std::vector<float> &normals,
    const std::vector<unsigned int> &indices
  );
  virtual void draw();
};
