<?php
/**
 * @file
 * fosterclub_glazed_theme.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fosterclub_glazed_theme_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fosterclub_glazed_theme_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function fosterclub_glazed_theme_flag_default_flags() {
  $flags = array();
  // Exported flag: "Flag spam".
  $flags['flag_spam'] = array(
    'entity_type' => 'node',
    'title' => 'Flag spam',
    'global' => 1,
    'types' => array(
      0 => 'answers_answer',
      1 => 'answers_question',
    ),
    'flag_short' => 'Report as Spam',
    'flag_long' => 'Flag this post as spam or as offensive',
    'flag_message' => 'Post flagged',
    'unflag_short' => 'Not spam?',
    'unflag_long' => 'Keep this post, click to unflag',
    'unflag_message' => 'Unflagged as spam',
    'unflag_denied_text' => 'Flagged',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'answers_full_node' => 'answers_full_node',
      'question' => 'question',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'mdp_full_popup' => 0,
      'mdp_inline_popup' => 0,
      'print' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'fosterclub_glazed_theme',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Flag spam comments".
  $flags['flag_spam_comments'] = array(
    'entity_type' => 'comment',
    'title' => 'Flag spam comments',
    'global' => 0,
    'types' => array(
      0 => 'comment_node_biography',
      1 => 'comment_node_blog',
      2 => 'comment_node_ctp',
      3 => 'comment_node_ctp_page',
      4 => 'comment_node_cb_drag_drop_page',
      5 => 'comment_node_event',
      6 => 'comment_node_page',
      7 => 'comment_node_poll',
      8 => 'comment_node_resource',
      9 => 'comment_node_syllabus',
      10 => 'comment_node_webform',
    ),
    'flag_short' => 'report',
    'flag_long' => 'Report this comment',
    'flag_message' => 'Comment reported',
    'unflag_short' => 'Allow comment',
    'unflag_long' => 'Allow this reported comment',
    'unflag_message' => 'Comment allowed',
    'unflag_denied_text' => 'Only admins can cancel spam flags',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => 'comment_others',
    'show_contextual_link' => 0,
    'module' => 'fosterclub_glazed_theme',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Flag spam users".
  $flags['flag_spam_users'] = array(
    'entity_type' => 'user',
    'title' => 'Flag spam users',
    'global' => 1,
    'types' => array(),
    'flag_short' => 'Spammer',
    'flag_long' => 'Flag this user as a spammer',
    'flag_message' => 'Thanks for reporting spam',
    'unflag_short' => 'Unflag this user',
    'unflag_long' => 'This user isn\'t spamming',
    'unflag_message' => 'User is restored',
    'unflag_denied_text' => 'You cannot un-report this user',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => 'others',
    'module' => 'fosterclub_glazed_theme',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
    'status' => FALSE,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function fosterclub_glazed_theme_image_default_styles() {
  $styles = array();

  // Exported image style: tiny_thumbnail.
  $styles['tiny_thumbnail'] = array(
    'label' => 'tiny thumbnail',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 35,
          'height' => 35,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
