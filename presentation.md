# Introduction to Drush #

Global Drupal Training Day  
14 December 2012

This presentation:  
http://bit.ly/drush-intro

!

## Who am I? ##

Developer at Moat Media

Drupal user since ? 2007

Linux user since 1999

Unix command line user since 1994

Not familiar with Windows!

!

## Who are you? ##

Drupal?

Unix/Linux?

Command line?

!

# Drush basics #

Command-line PHP script

Administer a Drupal site from the command line

!

## Why Drush is awesome ##

!

# Getting started with Drush #

Requirements:

- A Drupal site
- Command-line access on local machine or on the server (usually via ssh)

!

## Command line basics 1 ##

cd, pwd

ls

find

which

!

## Command line basics 2 ##

grep

wget, curl

unzip, gunzip, tar

!

## Installation and setup ##

http://drupal.org/project/drush

Use PEAR (PHP repository)

Manual installation

Config files

!

# Help! #

`drush help [command]`

!

# Common Drush scenarios #

Maintaining an existing Drupal site

Use Drush Make to build a site with a makefile and optional installation profile - later in this session

!

## Download a module or theme ##

`drush dl`

!

## Enable and disable modules, themes, and features ##

`drush en`

`drush dis`

!

## Update the database ##

`drush updb`

!

## Install all available updates ##

`drush up`

!

## Backup and migrate ##

`drush bam-backup ...`

!

## Features #

`drush fl`

`drush fd <feature>`

`drush fr <feature>`

`drush fu <feature>`

!

# Drush Make #

`drush make <makefile>`

Recipe for compiling a program or building a website

Include contrib and custom modules, libraries, themes

Use for repeating common scenarios

!

## Example makefile ##

!

## Installation profiles ##

Makefile and other components that can be bundled with core Drupal as a distribution.

Example ...

!

# Where to next? #

http://drupal.org/documentation/modules/drush

http://drush.org

Claudine Chionh  
claudine@chionh.org

