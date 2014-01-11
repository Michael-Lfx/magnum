/*
    This file is part of Magnum.

    Copyright © 2010, 2011, 2012, 2013 Vladimír Vondruš <mosra@centrum.cz>

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included
    in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.
*/

#include "Magnum/Shaders/VertexColor.h"
#include "Magnum/Test/AbstractOpenGLTester.h"

#ifdef MAGNUM_BUILD_STATIC
#include "Magnum/Shaders/resourceImport.hpp"
#endif

namespace Magnum { namespace Shaders { namespace Test {

class VertexColorGLTest: public Magnum::Test::AbstractOpenGLTester {
    public:
        explicit VertexColorGLTest();

        void compile2D();
        void compile3D();
};

VertexColorGLTest::VertexColorGLTest() {
    addTests({&VertexColorGLTest::compile2D,
              &VertexColorGLTest::compile3D});
}

void VertexColorGLTest::compile2D() {
    Shaders::VertexColor2D shader;
    CORRADE_VERIFY(shader.validate().first);
}

void VertexColorGLTest::compile3D() {
    Shaders::VertexColor3D shader;
    CORRADE_VERIFY(shader.validate().first);
}

}}}

CORRADE_TEST_MAIN(Magnum::Shaders::Test::VertexColorGLTest)
