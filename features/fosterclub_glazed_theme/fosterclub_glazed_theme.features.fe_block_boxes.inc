<?php
/**
 * @file
 * fosterclub_glazed_theme.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function fosterclub_glazed_theme_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'login or register links';
  $fe_block_boxes->format = 'wysiwyg_full';
  $fe_block_boxes->machine_name = 'custom_login';
  $fe_block_boxes->body = '<p style="text-align: right;"><a href="/fosterparents">For Foster Parents</a> &nbsp; | &nbsp;&nbsp;<a href="/user/login">Login</a> or <a href="/user/register">create new account</a></p>
';

  $export['custom_login'] = $fe_block_boxes;

  return $export;
}
