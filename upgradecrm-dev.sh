#!/bin/bash
# CiviCRM upgrade script for FosterClub local dev site only
# This script asks developer to download latest version of CiviCRM
# and unpack it into specified directory, then asks when ready to continue
# It performs proper CiviCRM-specific contrib modules, deletes temp files, 
# clears out the templates_c directory, and flushes caches
# Upon script completion, test CiviCRM and commit code.
# TODO: add variable for CiviCRM path to customize section
# Christia Hall 2018, christia@thedotconcept.com

# One-time customizations:
# Set some environment-specific variables
# Drupal root, no trailing slash
DROOT=/users/christiahall/Sites/example/docroot

# Git branch to use
BRANCH=dev

# No more variables, don't edit after this
echo Download latest package from https\:\/\/civicrm.org\/download and extract into $DROOT/sites/all/modules/contrib/
echo Do you want to continue? \(y\/n\)
read GO
	if [ "$GO" = "y" ]; then
		echo Disabling Drupal CiviCRM contrib modules...
		cd $DROOT
		drush pm-disable civicrm_member_roles -y
		drush pm-disable webform_civicrm -y
		# chown -R www-data sites/default/files/civicrm/templates_c
		echo Deleting temp files...
		rm -r sites/default/files/civicrm/templates_c/*
		drush civicrm-upgrade-db
		echo Enabling Drupal CiviCRM contrib modules
		drush en civicrm_member_roles -y
		drush en webform_civicrm -y
		drush en fosterclub_civicrm_settings -y
		drush en fosterclub_glazed_theme -y
		drush cc all
		# need to delete templates_c folder again
		rm -r sites/default/files/civicrm/templates_c/*
		echo Upgrade complete
	else
		echo Come back when you\'re ready
		exit
	fi
