# TSunmix #

TSunmix is an open source tool for extracting Tiberian Sun .mix files. Currently in version 0.3.3, tsunmix is opened for public testing.

Development of TSunmix is finished, it's being translated to crossplatform java as jTSMix. This new version will support all important functionality from TSunmix, TSMix and is going to have GUI.

There were connected projects developed: [TSmix](http://code.google.com/p/tsmix/) (mix file editor) and GUI for both tools. They are currently in early alpha stage, so they can contain lot of bugs.

**Support project:** <a href='http://flattr.com/thing/459302/TSunmix'>
<img src='http://api.flattr.com/button/flattr-badge-large.png' alt='Flattr this' border='0' title='Flattr this' /></a>



## 0.3.3 ##
  * FIX: shows version and extits

[Version History](VersionHistory.md).

# Usage #

| **command** | **effect** |
|:------------|:-----------|
| tsunmix `<filename>` | Basic list of files, showing _crc id_, _offset_ and _size_ |
| tsunmix `<filename>` [list](UsageExamples#List_of_files_(with_file_names).md) | List of files, showing _filename_, _crc id_, _offset_ and _size_. May take some time if lot of files are in mix archive. |
| tsunmix `<filename>` [getid](UsageExamples#CRC_id_of_a_file.md) `<file>` | Counts and displays crc id from `<file>`. Tells if `<file>` is present. |
| tsunmix `<filename>` [all](UsageExamples#Extract_everything.md) {-o <output directory> {-f}} | Extracts all the files from archive. Option **-f** means fast - filenames are not recovered. Output directory must exist. |
| tsunmix `<filename>` [extract](UsageExamples#Extract_a_specific_file(s).md) `<file1> {-o <ofile1>} <file2> {-o <ofile2>}` ... | Extracts `<filex>` files from archive specified by their file names. Output file can be specified with `-o <ofile>` |
| tsunmix `<filename>` [extid](UsageExamples#Examples_with_ID_instead_of_filename.md) `<file1> {-o <ofile1>} <file2> {-o <ofile2>}` ... | Extracts `<filex>` files from archive specified by their CRC ids (0x prefix for hex formatted id). Output file can be specified with `-o <ofile>` |
| tsunmix `<filename>` decrypt `{-o <ofile>}`| Saves decrypted mix file to specified path, or suffix "_decrypted.mix" is used._|

See [Usage Examples](UsageExamples.md) for more details.

# Documentation #

Full documentation can be found at http://tsunmix.googlecode.com/git/doc/html/index.html.

# Licence #

This program is free software; you can redistribute it and/or modify it under the terms of the [GNU General Public License](http://www.gnu.org/licenses/gpl.html) as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the [GNU General Public License](http://www.gnu.org/licenses/gpl.html) for more details.

You should have received a copy of the [GNU General Public License](http://www.gnu.org/licenses/gpl.html) along with this program; if not, write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

# Thanks to #

Thanks to Olaf van der Spek for support and sharing his "mix file knowledge".

# External links #
  * TS mix file format specification (http://xhp.xwis.net/documents/MIX_Format.html)
  * XCC homepage (http://xhp.xwis.net/)
  * XCC google code page (http://code.google.com/p/xcc/)