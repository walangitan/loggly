<?php

/**
 * @file
 * Loggly configuration and module settings UI.
 */

function loggly_admin_settings() {

  $form['loggly_account'] = array(
    '#type' => 'textfield',
    '#title' => t('Account'),
    '#default_value' => variable_get('loggly_username'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
