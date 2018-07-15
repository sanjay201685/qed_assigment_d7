<?php
/**
 * @file
 * qed_assignment.features.inc
 */

/**
 * Implements hook_views_api().
 */
function qed_assignment_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function qed_assignment_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favorite Tracks".
  $flags['favorite_tracks'] = array(
    'entity_type' => 'node',
    'title' => 'Favorite Tracks',
    'global' => 0,
    'types' => array(
      0 => 'music_tracks',
    ),
    'flag_short' => 'Favorite',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Un-Favorite',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'qed_assignment',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function qed_assignment_node_info() {
  $items = array(
    'album' => array(
      'name' => t('Album'),
      'base' => 'node_content',
      'description' => t('Create Album for music tracks'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'music_tracks' => array(
      'name' => t('Music Tracks'),
      'base' => 'node_content',
      'description' => t('Add music tracks'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video_series' => array(
      'name' => t('Video Series'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video_subscription' => array(
      'name' => t('video subscription'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
