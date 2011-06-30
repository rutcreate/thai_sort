<?php

/**
 * Settings.
 */
function thai_sort_settings() {
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Flush sorted title'),
  );
  $form['#submit'] = array('thai_sort_settings_submit');
  $form['#redirect'] = 'admin/settings/thai_sort/flush';
  return $form;
}
