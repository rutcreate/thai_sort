<?php

/**
 * Implementation of hook_views_data().
 */
function thai_sort_views_data() {
  $data['node']['th_title'] = array(
    'title' => t('Thai title'), // The item it appears as on the UI,
    'help' => t('The Thai title of the node.'), // The help that appears on the UI,
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  return $data;
}
