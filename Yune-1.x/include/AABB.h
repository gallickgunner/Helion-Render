/******************************************************************************
 *  This file is part of "Helion-Render".
 *
 *  Copyright (C) 2018 by Umair Ahmed and Syed Moiz Hussain.
 *
 *  "Helion-Render" is a Physically based Renderer using Bi-Directional Path Tracing.
 *  Right now the renderer only  works for devices that support OpenCL and OpenGL.
 *
 *  "Helion-Render" is a free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  "Helion-Render" is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 ******************************************************************************/

#ifndef AABB_H
#define AABB_H
#include <glm/vec4.hpp>

class AABB
{
    public:
        AABB();
        AABB(glm::vec4, glm::vec4);
        glm::vec4 p_min;
        glm::vec4 p_max;
};

#endif // AABB_H