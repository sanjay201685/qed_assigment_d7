<?php
/**
 * @file
 * qed_assignment.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function qed_assignment_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer voting api'.
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'votingapi',
  );

  // Exported permission: 'create album content'.
  $permissions['create album content'] = array(
    'name' => 'create album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create music_tracks content'.
  $permissions['create music_tracks content'] = array(
    'name' => 'create music_tracks content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create video_series content'.
  $permissions['create video_series content'] = array(
    'name' => 'create video_series content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create video_subscription content'.
  $permissions['create video_subscription content'] = array(
    'name' => 'create video_subscription content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any album content'.
  $permissions['delete any album content'] = array(
    'name' => 'delete any album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any music_tracks content'.
  $permissions['delete any music_tracks content'] = array(
    'name' => 'delete any music_tracks content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any video_series content'.
  $permissions['delete any video_series content'] = array(
    'name' => 'delete any video_series content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any video_subscription content'.
  $permissions['delete any video_subscription content'] = array(
    'name' => 'delete any video_subscription content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own album content'.
  $permissions['delete own album content'] = array(
    'name' => 'delete own album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own music_tracks content'.
  $permissions['delete own music_tracks content'] = array(
    'name' => 'delete own music_tracks content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own video_series content'.
  $permissions['delete own video_series content'] = array(
    'name' => 'delete own video_series content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own video_subscription content'.
  $permissions['delete own video_subscription content'] = array(
    'name' => 'delete own video_subscription content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any album content'.
  $permissions['edit any album content'] = array(
    'name' => 'edit any album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any music_tracks content'.
  $permissions['edit any music_tracks content'] = array(
    'name' => 'edit any music_tracks content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any video_series content'.
  $permissions['edit any video_series content'] = array(
    'name' => 'edit any video_series content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any video_subscription content'.
  $permissions['edit any video_subscription content'] = array(
    'name' => 'edit any video_subscription content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own album content'.
  $permissions['edit own album content'] = array(
    'name' => 'edit own album content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own music_tracks content'.
  $permissions['edit own music_tracks content'] = array(
    'name' => 'edit own music_tracks content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own video_series content'.
  $permissions['edit own video_series content'] = array(
    'name' => 'edit own video_series content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own video_subscription content'.
  $permissions['edit own video_subscription content'] = array(
    'name' => 'edit own video_subscription content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'flag favorite_tracks'.
  $permissions['flag favorite_tracks'] = array(
    'name' => 'flag favorite_tracks',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'unflag favorite_tracks'.
  $permissions['unflag favorite_tracks'] = array(
    'name' => 'unflag favorite_tracks',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'view rate results page'.
  $permissions['view rate results page'] = array(
    'name' => 'view rate results page',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rate',
  );

  return $permissions;
}
