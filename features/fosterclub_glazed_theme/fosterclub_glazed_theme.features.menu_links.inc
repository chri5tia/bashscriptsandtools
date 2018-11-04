<?php
/**
 * @file
 * fosterclub_glazed_theme.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function fosterclub_glazed_theme_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_donate:civicrm/contribute/transact.
  $menu_links['main-menu_donate:civicrm/contribute/transact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'civicrm/contribute/transact',
    'router_path' => 'civicrm',
    'link_title' => 'Donate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_donate:civicrm/contribute/transact',
      'query' => array(
        'reset' => 1,
        'id' => 1,
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -38,
    'customized' => 1,
  );
  // Exported menu link: main-menu_resources:resources.
  $menu_links['main-menu_resources:resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources',
    'router_path' => 'resources',
    'link_title' => 'Resources',
    'options' => array(
      'identifier' => 'main-menu_resources:resources',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_store:http://store.fosterclub.com.
  $menu_links['main-menu_store:http://store.fosterclub.com'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://store.fosterclub.com',
    'router_path' => '',
    'link_title' => 'Store',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_store:http://store.fosterclub.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: user-menu_create-account:user/register.
  $menu_links['user-menu_create-account:user/register'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Create account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_create-account:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-in:user/login.
  $menu_links['user-menu_log-in:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(
      'identifier' => 'user-menu_log-in:user/login',
    ),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'user-menu_user-account:user',
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Create account');
  t('Donate');
  t('Log in');
  t('Resources');
  t('Store');
  t('User account');

  return $menu_links;
}
