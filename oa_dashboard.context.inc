<?php
/**
 * @file
 * oa_dashboard.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function oa_dashboard_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'oa_dashboard';
  $context->description = 'A dashboard for Open Accession dashboard';
  $context->tag = 'dashboard';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'dashboard' => 'dashboard',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-contacts-block_1' => array(
          'module' => 'views',
          'delta' => 'contacts-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-exhibits-block_2' => array(
          'module' => 'views',
          'delta' => 'exhibits-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
        'views-oa_tracker-block_1' => array(
          'module' => 'views',
          'delta' => 'oa_tracker-block_1',
          'region' => 'content_top',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('A dashboard for Open Accession dashboard');
  t('dashboard');
  $export['oa_dashboard'] = $context;

  return $export;
}
