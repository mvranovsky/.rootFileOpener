# .rootFileOpener

## Overview:

*.rootFileOpener* is a program, with which one can open *.root* files simply just by double clicking them from file viewer. This tutorial assumes that the user has successfully downloaded and installed root and is using linux as the operating system.

Author of code: Tomas Truhlar
Testing and manual: Michal Vranovsky

## Installation:

Create a directory for the code and enter it:

<pre><code> mkdir rBrowser </pre></code>
<pre><code> cd rBrowser </pre></code>

clone .rootFileOpener repository:

<pre><code> git clone !!! </pre></code>

Compile rbrowser.C using g++ and create an executable rbrowser:

<pre><code> g++ -o rbrowser rbrowser.C `root-config --cflags --libs --glibs --evelibs` </pre></code>

At this point the TBrowser code is working and one can run it from terminal using:

<pre><code> ./rbrowser test.root </pre></code>

One problem that can arise is that the program opens TBrowser in web enviroment. This problem is addressed in the next section.

Now comes the tricky part that mostly depends on the type of linux one is using. In file viewer, I right clicked on a *.root* file(test.root is there for exactly this purpose) and picked option "open with" and followed with "other application". It opens up a window where one can choose the executable program with which one can run it. Either look for the executable *rbrowser* which was created by compiling the program or enter the absolute path to the program:

<pre><code> /home/user/rBrowser/rbrowser </pre></code>

Once that is done, one can set it to be the default program to open *.root* files.

## TBrowser without web

This part is for those who use TBrowser without web. Create a *.rootrc* file in home directory:

<pre><code> touch .rootrc </pre></code> 

and add to it only one line of code

<pre><code> echo "Browser.Name: TRootBrowser" >> .gg.txt </pre></code>

With this line of code, root will be opening TBrowser without web. File *.rootrc* has the function of a configuration file used for root in which one can set their options such as a *.rootlogon.C* file. 