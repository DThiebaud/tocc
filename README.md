Tocc, a Tool for Obsessive Compulsive Classifers
================================================

Introduction
------------

Tocc is a tag-based file management system. It also includes a tag-based file
system called Toccfs. The goal of Tocc is to provide a better system for
classifying files, more flexible than classic file systems that are based on a
tree of files and directories.

For more information about why Tocc is created, do you need it, its vision and
what it can be used for, take a look at its web page:

   http://t-o-c-c.com

Copyright
---------
Tocc is free software and releases under the terms of Gnu General Public
License version 3. Refer to COPYING file for the full license.

Building Source
---------------
Tocc consist of three components: ``libtocc``, ``cli`` and ``toccfs``. Each of
them have their own dependencies. For the full instruction of how to build each
of them, refer to the documentation inside each directory.

But if you want a quick start, here you go:

Inside ``libtocc`` directory, there's a script called ``bootstrap``. Run it.
(If you have one of the released source package, this step is already done.)
Now run ``configure`` script, then ``make`` and ``make install``.

Now, do these steps on ``cli`` and ``toccfs`` directories.

Building Documents
------------------
If you get the source code from Github repository, only the source of the
documents is available. To build them, you need *Sphinx*. You can either
install it from your distro's packages, or get it from its website:

   http://sphinx-doc.org/

Then, go to `docs` directory, in the root and inside each directory of the
repository, and run `make html`. Then, you can find the documentation as HTML
files, in the `build\html` directory inside the `docs`.

Contact
-------
Currently, Tocc is maintain by Aidin Gharibnavaz. You can contact him by the
following e-mail address:

   aidin (at) t-o-c-c.com

You can find the development team by visiting Tocc's Github page:

   https://github.com/aidin36/tocc/

