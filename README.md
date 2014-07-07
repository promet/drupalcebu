Drupal Cebu
=======

requirements
------------
* [vagrant](http://downloads.vagrantup.com/) >= 1.2.0
* [berkshelf](http://berkshelf.com/) >= 2.0.0
* [vagrant-berkshelf plugin](https://github.com/RiotGames/vagrant-berkshelf) >= 1.3.3
* [vagrant-omnibus plugin](https://github.com/schisamo/vagrant-omnibus) >= 1.1.0

Use
---

The build script `drush-build.sh` takes an environment argument which can be
one of the following:

* local
* dev
* prod

additional environments can be added by simply adding a directory for it with
a build.sh in it.

Global
------
For all environments, the build script will:

* enable and purge all modules within the build root (`mods_enabled` and `mods_purge`) on every build for every environment.
* Revert all features (`drush fra`), run update hooks (`drush updb`), and clear caches.

Dev
-----
This script is intended to run on a development environment. Use `mods_enabled` in the environment directory to enable modules needed on development or staging.


Local
-----
Now that this site is on production, this script is intended to build with a copy of the database and files. Use `mods_enable` in the environment directory to enable only modules needed for local development.
To use ensure that you have:
1. created a directory named `ref_db` inside the `local` directory.
2. Place a current copy of the prod DB inside `ref_db` and name it `cosmoDB.sql`.
3. Get a current copy of the files from production and place it within `/www/sites/default`.

Prod
-----
This script is intended to run on a production environment. Use `mods_purge` in the environment directory to disbale modules not needed on development or staging.
