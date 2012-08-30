<?php

/**
 * @file
 * Changetheme administration functions.
 */

/**
 * Form for theme settings.
 */
function changetheme_admin_settings() {
  $options = changetheme_options();
  $spaces = changetheme_spaces();
  
  if(empty($options)){
    drupal_set_message(t('You should activate more than one theme.'),'warning');
    return FALSE;
  }
  if(empty($spaces)){
    drupal_set_message(t('You should activate more than one space.'),'warning');
    return FALSE;
  }
  
  foreach ($spaces as $s => $space) {
    $form['changetheme']['changetheme_space_'. $s] = array(
      '#type' => 'fieldset',
      '#title' => $space,
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );
    $form['changetheme']['changetheme_space_'. $s]['space_'. $s] = array(
      '#type' => 'hidden',
      '#title' => $space,
      '#default_value' => variable_get('space_'. $space, $s),
      '#disabled' => TRUE,
    );
    $form['changetheme']['changetheme_space_'. $s]['changetheme_'. $s] = array(
      '#type' => 'checkboxes',
      '#title' => t('Themes'),
      '#default_value' => variable_get('changetheme_'. $s, $options),
      '#options' => $options,
    );
  }
  return system_settings_form($form);
}
