Vinylidene (Vinyl Player)
================

Vinylidene is the next generation music streaming service, servicing pony related artists and simular over a secure distribution network provided by the community, powered by a master server and MySQL.

Directory Listing
----------------

* client/ - The client, written in C++ and uses QT.
	* libs/ - Required libraries
	* README.md - Readme for that part of the project in particular.
* cdns/ - Content Distribution Network Server, serves the secure music streams themselves.
	* libs/ - Required libraries
	* README.md - Readme for that part of the project in particular.
* masterserver/ - Master Server, the backbone that selects a suitable CDNS, hosted by Cloud Chiller
	* libs/ - Required libraries
	* README.md - Readme for that part of the project in particular.
* LICENCE.md - Guess.
* README.md - This document, silly!
* .gitignore - Specifies what files to get ignored by GIT.