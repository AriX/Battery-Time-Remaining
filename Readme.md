Battery Time Remaining
======================

Battery Time Remaining shows your battery's estimated time at the top of your screen in OS X 10.8 Mountain Lion. This version, a fork of the original, is implemented as an NSMenuExtra, so you can re-arrange it in the menu bar by holding the command key and dragging, just like Apple's original implementation.

This version does not intend to replace the original Battery Time Remaining, as it is not App Store-safe. This is just for those who would like to be able to re-arrange the status item to their hearts' content!

This version also has slightly different strings to more closely match Apple's version. I may have broken the localization; if the menu extra doesn't show up in your language, let me know.

![Normal mode](https://raw.github.com/AriX/Battery-Time-Remaining/master/preview.png)

Why does this project exist?
-----------------------------

Apple removed the option to show the remaining battery time in the menu bar since the release of Mountain Lion. This project restores the functionality.

How do I install it?
--------------------

Two options:

- Download [latest version](https://github.com/AriX/Battery-Time-Remaining/downloads), unzip and follow the instructions
- Download the source here from GitHub and compile it with Xcode

Who made this app?
----------------------

* [codler](https://github.com/codler) / Han Lin Yap: created the [first version](https://github.com/codler/Battery-Time-Remaining) of the app
* [mac-cain13](https://github.com/mac-cain13) / Mathijs Kadijk: made some improvements
* [AriX](https://github.com/AriX) / Ari Weinstein: Re-implemented as NSMenuExtra

Change log
----------

2012-11-17 - **NSMenuExtra fork v1.0.1** - Fix menu extra display bug

2012-11-17 - **NSMenuExtra fork v1.0**

2012-11-01 - **v1.6.1** - [diff](https://github.com/codler/Battery-Time-Remaining/compare/v1.6...v1.6.1)

* Added Italian language ([DMG1](https://github.com/DMG1) [#46](https://github.com/codler/Battery-Time-Remaining/issues/46))
* Added Korean language ([JustyStyle](https://github.com/justystyle))
* Updated French, German, Swedish languages ([codler](https://github.com/codler) [Velines](https://github.com/Velines) [Vinky41](https://github.com/Vinky41) [#48](https://github.com/codler/Battery-Time-Remaining/pull/48))
* Prompt auto update ([codler](https://github.com/codler))

2012-10-03 - **v1.6** - [diff](https://github.com/codler/Battery-Time-Remaining/compare/v1.5.2...v1.6)

* New app icon ([dizel247](https://github.com/dizel247) [#11](https://github.com/codler/Battery-Time-Remaining/issues/11))
* Added fast switch between advanced mode by pressing option key. ([codler](https://github.com/codler))
* Added Polish language ([alamilar](https://github.com/alamilar) [#38](https://github.com/codler/Battery-Time-Remaining/issues/38))
* Added Portuguese language (dvm)
* Added Simplified Chinese language ([zhangwen590](https://github.com/zhangwen590))
* Improved notification ([codler](https://github.com/codler) [#20](https://github.com/codler/Battery-Time-Remaining/issues/20))
* Improved translation ([codler](https://github.com/codler) [#26](https://github.com/codler/Battery-Time-Remaining/issues/26))
* Improved battery icon ([codler](https://github.com/codler) [#29](https://github.com/codler/Battery-Time-Remaining/issues/29))
* Improved menu ([codler](https://github.com/codler))
* Fix memory leaks ([codler](https://github.com/codler))
* Fix bug not showing correct on logon ([codler](https://github.com/codler) [#22](https://github.com/codler/Battery-Time-Remaining/issues/22))

2012-08-29 - **v1.5.2** - [diff](https://github.com/codler/Battery-Time-Remaining/compare/v1.5.1...v1.5.2)

* Added Display time with parantheses setting ([c-alpha](https://github.com/c-alpha) [#19](https://github.com/codler/Battery-Time-Remaining/pull/19))
* Added Slovak language ([miroslavchutnak](https://github.com/miroslavchutnak) [#34](https://github.com/codler/Battery-Time-Remaining/issues/34))
* Updated existing languages ([codler](https://github.com/codler) [c-alpha](https://github.com/c-alpha) [guillaume-algis](https://github.com/guillaume-algis) [mac-cain13](https://github.com/mac-cain13) [Velines](https://github.com/Velines) [Vinky41](https://github.com/Vinky41) [#21](https://github.com/codler/Battery-Time-Remaining/pull/21) [#25](https://github.com/codler/Battery-Time-Remaining/pull/25) [#27](https://github.com/codler/Battery-Time-Remaining/pull/27))
* Improved battery icon ([codler](https://github.com/codler) [c-alpha](https://github.com/c-alpha) [#19](https://github.com/codler/Battery-Time-Remaining/pull/19))
* Fix bug not showing red color in battery icon in v1.5.1

2012-08-25 - **v1.5.1** - [diff](https://github.com/codler/Battery-Time-Remaining/compare/v1.5...v1.5.1)

* Added French language ([guillaume-algis](https://github.com/guillaume-algis) [#16](https://github.com/codler/Battery-Time-Remaining/pull/16))
* Added German language ([Velines](https://github.com/Velines) [#18](https://github.com/codler/Battery-Time-Remaining/pull/18))
* Improved battery icon by adding white drop shadow ([guillaume-algis](https://github.com/guillaume-algis) [#16](https://github.com/codler/Battery-Time-Remaining/pull/16) [#5](https://github.com/codler/Battery-Time-Remaining/issues/5))
* Fix a bug on battery icon in retina display ([codler](https://github.com/codler) [#13](https://github.com/codler/Battery-Time-Remaining/issues/13))
* Fix a bug not showing batteryCharged icon  ([codler](https://github.com/codler))

2012-08-19 - **v1.5** - [diff](https://github.com/codler/Battery-Time-Remaining/compare/v1.4...v1.5)

* Added language support ([mac-cain13](https://github.com/mac-cain13) [#9](https://github.com/codler/Battery-Time-Remaining/pull/9))
* Added Dutch language ([mac-cain13](https://github.com/mac-cain13) [#9](https://github.com/codler/Battery-Time-Remaining/pull/9) [#10](https://github.com/codler/Battery-Time-Remaining/pull/10))
* Added Swedish language ([codler](https://github.com/codler))
* Added advanced mode section ([codler](https://github.com/codler))
* Show battery temperature (advanced mode) ([codler](https://github.com/codler))
* Show power usage (advanced mode) ([codler](https://github.com/codler))
* Show battery cycle count (advanced mode) ([codler](https://github.com/codler))
* Show battery in mAh (advanced mode) ([codler](https://github.com/codler))
* Improved battery icon ([codler](https://github.com/codler) [#8](https://github.com/codler/Battery-Time-Remaining/issues/8))
* Improved app icon ([codler](https://github.com/codler) [#11](https://github.com/codler/Battery-Time-Remaining/issues/11))
* Code improvements ([codler](https://github.com/codler))
* Smaller text in menubar ([codler](https://github.com/codler) [#12](https://github.com/codler/Battery-Time-Remaining/issues/12))

2012-08-15 - **v1.4** - [diff](https://github.com/codler/Battery-Time-Remaining/compare/v1.3...v1.4)

* App sandbox ([codler](https://github.com/codler))
* Rewrote start at login ([codler](https://github.com/codler) [#4](https://github.com/codler/Battery-Time-Remaining/issues/4))
* Improved battery icon ([codler](https://github.com/codler))
* Improved notification ([codler](https://github.com/codler))

2012-08-12 - **v1.3** - [diff](https://github.com/codler/Battery-Time-Remaining/compare/v1.2.1...v1.3)

* Added check for updates ([codler](https://github.com/codler))
* Display battery percentage left in menu ([codler](https://github.com/codler) [#6](https://github.com/codler/Battery-Time-Remaining/issues/6))

2012-08-09 - **v1.2.1** *(signed app)* - [diff](https://github.com/codler/Battery-Time-Remaining/compare/v1.2...v1.2.1)

* Added notifications ([codler](https://github.com/codler))
* Added open energy saver preferences option ([codler](https://github.com/codler))

2012-08-08 - **v1.2** *(signed app)* - [diff](https://github.com/codler/Battery-Time-Remaining/compare/v1.1.1...v1.2)

* From now on the app will always be signed. ([codler](https://github.com/codler) [#3](https://github.com/codler/Battery-Time-Remaining/issues/3))
* Added higher resolution app icon ([codler](https://github.com/codler))

2012-08-06 - **v1.1.1** *(unsigned app)* - [diff](https://github.com/codler/Battery-Time-Remaining/compare/v1.1...v1.1.1)

* Added app icon ([mac-cain13](https://github.com/mac-cain13) [#2](https://github.com/codler/Battery-Time-Remaining/pull/2))
* Improved battery icon ([mac-cain13](https://github.com/mac-cain13) [#2](https://github.com/codler/Battery-Time-Remaining/pull/2))
* Removed MainMenu.xib ([codler](https://github.com/codler))

2012-08-05 - **v1.1** *(unsigned app)* - [diff](https://github.com/codler/Battery-Time-Remaining/compare/v1.0...v1.1)

* Added battery icon ([mac-cain13](https://github.com/mac-cain13) [#1](https://github.com/codler/Battery-Time-Remaining/pull/1))
* Added start at login option ([mac-cain13](https://github.com/mac-cain13) [#1](https://github.com/codler/Battery-Time-Remaining/pull/1))
* Added readme ([mac-cain13](https://github.com/mac-cain13) [#1](https://github.com/codler/Battery-Time-Remaining/pull/1))
* Improved battery icon ([codler](https://github.com/codler))
* Improved time remaining text ([mac-cain13](https://github.com/mac-cain13) [#1](https://github.com/codler/Battery-Time-Remaining/pull/1))

2012-08-01 - **v1.0** *(unsigned app)*

* First commit. ([codler](https://github.com/codler))