/*
 * Window.cpp
 *
 *  This file is part of Delaunay.
 *
 *  Delaunay is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Delaunay is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Delaunay.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "Window.h"
#include "GLWidget.h"

Window::Window() {
    glWidget = new GLWidget;
    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addWidget((QWidget *) glWidget);
    setLayout(mainLayout);
    setWindowTitle("Delaunay");
}


