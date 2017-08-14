wt-test
=======

Wt test - The WebToolkit for C++ programmers


* http://www.webtoolkit.eu/wt
* http://redmine.webtoolkit.eu/boards/1/topics/5159
* /usr/lib/Wt/examples


## Usage

1. get clone
2. ln -s /usr/share/Wt/resources resources
3. make clean available
4. ./KanBanUi  --docroot . --http-address 0.0.0.0 --http-port 9090


Test:
make
./hello --docroot . --http-address 0.0.0.0 --http-port 9090


What does an application have?

Login screen/authentication screen

* Canvas
* Tabs
* Status bar(at the bottom).
* Menu bar(at the top)?
* Entry fields
* DB interface, start with SQL
* Submit buttons
* Help text

Control, Model, View


KanBan UI
* Capture
* Chunk
* Plan
* Schedule
* Execute
* Complete/Archive
* Celebrate
