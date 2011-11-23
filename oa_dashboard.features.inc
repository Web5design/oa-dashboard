<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function oa_dashboard_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function oa_dashboard_imagecache_default_presets() {
  $items = array(
    'profile-default' => array(
      'presetname' => 'profile-default',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '35px',
            'height' => '35px',
          ),
        ),
      ),
    ),
  );
  return $items;
}
