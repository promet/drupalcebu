#! /usr/bin/env bash
echo "Dropping database.";
$drush sql-drop -y
echo "Installing database.";
$drush sqlc -y < $env_path/ref_db/pcpcDB.sql
echo "Enabling modules needed for local development.";
$drush en $(cat $env_path/mods_enabled | tr '\n' ' ') -y -v
echo "Setting password for local";
$drush upwd admin --password=drupaladm1n -y
echo "Clearing caches.";
$drush cc all -y
echo "Disabling css and js caching.";
$drush vset -y preprocess_css 0
$drush vset -y preprocess_js 0
