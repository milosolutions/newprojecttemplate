[TOC]

Milo Code DB main ([online](https://qtdocs.milosolutions.com/milo-code-db/main/) | [offline](\ref milodatabasemain))

# Using this template

Minimal Qt version is Qt 5.5. Recommended: newest available

## Starting from installer

If you are installing template project using Installer:
1. Create new repository by going to project directory and using:
```
git init
```
2. Connect to remote repository:
```
git remote add origin git@gitlab.domain.com:username/repository.git
```
3. Open .pro file using your IDE and you can start working!
4. Fill Release.md file with information about how to build and release a package
   to the client.
5. Create a wiki and maintain it.
6. Ensure all newly added code is properly commented.
7. Push your changes:
```
git add -A
git commit -m 'first commit'
git push -u origin master
```

## Starting from template

In order to use this project template in your new project, please do the following:
0. Follow this: https://wiki.milosolutions.com/index.php/Development_tutorial,
   especially the bit about documentation,
1. Copy all the code to your project repository.
2. Search for all occurences ofthe word "template" (case insensitive search)
   and replace them with the name of your project. Also, change the name of
   template.pro and template.doxyfile to match the new project name.
4. Read through template.pro file and adjust it to your needs.
5. Remove this message and put in real info about the project in README.md file.
6. Fill Release.md file with information about how to build and release a package
   to the client.
7. Push your code to new git repository.
8. Create a wiki and maintain it.
9. Ensure all newly added code is properly commented.

## Optional items:

1. Add CI to your project (see MScripts repository in Milo Code Database).

## Milo Code Database: 

Other subprojects can add more goodies to this template. Please check out https://wiki.milosolutions.com/index.php/Milo_Code_DB

# 3rd party libraries 

* [create-dmg](https://github.com/andreyvit/create-dmg) - A shell script to build fancy DMGs. MIT License.

# License 

This project is licensed under the MIT License - see the LICENSE-MiloCodeDB.txt file for details