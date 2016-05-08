# Qt Project Boilerplate

I often find it tedious to setup a new Qt project. Having spent most of my development in a JetBrains IDE, I feel like I've been spoiled.

> This boilerplate is based on the guide http://dragly.org/2014/03/13/new-project-structure-for-projects-in-qt-creator-with-unit-tests/
> with the adaptation of using the Qt unit testing framework.

For QtCreator, I typically:

1. Create a `Subdirs Project`.
2. Create a `Qt Widgets/Quick Application`.
3. Create a shared or dynamic library (for C++).
4. Create a test project for the library.  Including configuring the project to access the library (compiled or source).
    > Note: I typically prefer importing the source for my projects by including a `.pri` file.

This boilerplate may change in the future as I discover new hierarchies that feel natural.
