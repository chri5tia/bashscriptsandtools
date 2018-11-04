<?php
/**
 * @file
 * fosterclub_glazed_theme.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fosterclub_glazed_theme_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bean-construction-secondary-header-0'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'construction-secondary-header-0',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'glazed' => array(
        'region' => 'secondary_header',
        'status' => 1,
        'theme' => 'glazed',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-glazed-facebook-widget'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'glazed-facebook-widget',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'blog',
    'roles' => array(),
    'themes' => array(
      'glazed' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'glazed',
        'weight' => -44,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-custom_login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'custom_login',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'dashboard',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'glazed' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'glazed',
        'weight' => 24,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['comment_block-node_comments'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'node_comments',
    'module' => 'comment_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'glazed' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'glazed',
        'weight' => -47,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['glazed_helper-full_screen_search'] = array(
    'cache' => -1,
    'css_class' => 'search',
    'custom' => 0,
    'delta' => 'full_screen_search',
    'module' => 'glazed_helper',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'glazed' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'glazed',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['sharethis_block-sharethis'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sharethis',
    'module' => 'sharethis_block',
    'node_types' => array(
      0 => 'biography',
      1 => 'blog',
      2 => 'cb_drag_drop_page',
      3 => 'ctp',
      4 => 'event',
      5 => 'page',
      6 => 'poll',
      7 => 'resource',
      8 => 'syllabus',
      9 => 'webform',
    ),
    'pages' => 'user
user/*
node/add/*
admin
admin/*
users/*
node/*/take/*
node/*/edit
media/*',
    'roles' => array(),
    'themes' => array(
      'glazed' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'glazed',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'shortcuts',
    'module' => 'shortcut',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'glazed' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'glazed',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'glazed' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'glazed',
        'weight' => -57,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
