#! /usr/bin/env bash
echo "Dropping database.";
$drush sql-drop -y
echo "Installing database.";
# $drush sqlc -y < $env_path/ref_db/drupalcebuDB.sql
echo "Installing database.";
$drush si standard -y --account-pass='drupaladm1n'
echo "Clearing registry.";
$drush cc all -y
echo "Disabling modules not needed for local development.";
$drush dis $(cat $env_path/mods_purge | tr '\n' ' ') -y -v
$drush pm-uninstall $(cat $env_path/mods_purge | tr '\n' ' ') -y -v
$drush updb -y
echo "Enabling modules needed for local development.";
$drush en $(cat $env_path/mods_enabled | tr '\n' ' ') -y -v
echo "Clearing caches.";
$drush cc all -y
echo "Disabling css and js caching.";
$drush vset -y preprocess_css 0
$drush vset -y preprocess_js 0
